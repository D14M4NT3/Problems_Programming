import java.io.IOException;
import java.util.Stack;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String patron = "()^*/+-";
	int n = sc.nextInt();
        for(int i=0; i<n; i++){
            String cadena = sc.next();
            String salida = "";
            Stack<String> pila = new Stack();

            for(int j=0; j<cadena.length(); j++){
                String w = String.valueOf(cadena.charAt(j));
                //System.out.println("PILA: "+pila);
                //System.out.println("SALIDA: "+salida);
                if(patron.contains(w)){
                    if(pila.empty()){
                        pila.push(w);
                    }else{
                        if(w.equals("(")){
                            pila.push(w);
                        }else if(w.equals(")")){
                            while(!pila.empty() && !(pila.peek().equals("("))){
                                salida+=pila.peek();
                                pila.pop();
                            }
                            pila.pop();
                        }else{
                            int k = veri(w,pila.peek());

                            if(k == 0){
                                salida+=pila.peek();
                                pila.pop();
                                pila.push(w);
                            }else if(k == 1){
                                pila.push(w);
                            }else{
                                //System.out.println("entro a menor prioridad - "+w);
                                while(!pila.empty() && !(pila.peek().equals("("))){
                                    salida+=pila.peek();
                                    pila.pop();
                                }
                                pila.push(w);
                            }
                        }
                    }
                }else{
                    salida +=  w;
                }
            }
            while(!pila.empty()){
                if(!(pila.peek().equals("("))){
                    salida+=pila.peek();
                }
                 pila.pop();
            }
            System.out.println(salida);
        }
    }

    public static Integer veri(String a, String b){ // nuevo, anterior
        String[] prioridad = {"^","*/","+-"};
        int c = -1;
        int d = -1;
        if(b.equals("(")){
            return 1;
        }
        for(int i=0; i<3; i++){
            if(prioridad[i].contains(a)){
                c = i;
            }
            if(prioridad[i].contains(b)){
                d = i;
            }
        }
        if(c==d){ // misma prioridad
            return 0;
        }else if(c<d){
            return 1; // mayor prioridad
        }else{
            return 2; // menor prioridad
        }
    }
}
