
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author usuario
 */
public class expert {
   public static List <String> nombre;
   public static List <Integer> precioinicial;
   public static List <Integer> preciofinal;
   public static Scanner sc = new Scanner(System.in);

   public static void main(String[] args) {
		problem();
	}
   
	public static void problem() {
		int casos = sc.nextInt();
		for(int i = 0; i<casos; i++) {
                    if (i==casos-1){
                        casos();
                    }else{
			casos();
                        System.out.println("");
                    }
		}
	}

	public static void casos() {
		
		int carros = sc.nextInt();                
		precioinicial = new ArrayList <>();
		preciofinal = new ArrayList <>();
		nombre = new ArrayList <>();
		for(int i = 0; i<carros; i++) {
			nombre.add(sc.next());
                        precioinicial.add(sc.nextInt());
			preciofinal.add(sc.nextInt());
		}
                int compra = sc.nextInt();
		for(int j = 0; j<compra; j++){
                    int precio = sc.nextInt();
                    System.out.println(bucarcarro(precio));
                }   
		
	}

    public static String bucarcarro(int precio) {
        int count = 0;
        int pos = 0;
        for (int i = 0 ; i<nombre.size(); i++){
            if(precio >= precioinicial.get(i) && precio <= preciofinal.get(i)){
                pos = i;
                count++;
            }
            if(count>1){
                break;
            }
            
        }
        if(count == 1 ){
            String l = nombre.get(pos);
            return l;           
        }else{
            String h = "UNDETERMINED";
            return h;
        }  
    }
}