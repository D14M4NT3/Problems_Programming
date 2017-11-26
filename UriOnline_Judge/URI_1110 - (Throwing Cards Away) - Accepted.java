import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 * IMPORTANT:
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			int n = sc.nextInt();
			int k;
			Queue<Integer> cola = new LinkedList<>();
			if(n!=0){
				String salida = "";
				for(int i=1; i<=n; i++) {
					cola.add(i);
				}
				while(cola.size()>1) {
					salida += String.valueOf(cola.element()) + ", ";
					cola.remove();
					k = cola.element();
					cola.remove();
					cola.add(k);
				}
				if(n>1) {
					salida = " "+salida.substring(0, salida.length()-2);
				}
				System.out.println("Discarded cards:" + salida);
				System.out.println("Remaining card: " + cola.peek());


			}else{
				System.exit(0);
				break;
			}
		}
    }

}
