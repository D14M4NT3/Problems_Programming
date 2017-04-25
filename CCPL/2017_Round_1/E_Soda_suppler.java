/*
    Name: E - Soda Supler
    Copyright: CCPL 2017 - Round 1 
    Author: (KomoLoZupo) - Jeison Sierra, Christian Gutierrez, "Daniel"
    Date: 18/02/2017
    * URL * https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2736
*/

import java.util.Scanner;

public class soda {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int e,f,c,n,latas=0,gaseosas=0, temp=0;
        n = sc.nextInt();
        if(n == 0){
            System.out.println("0");
        }
        for(int i=0; i<n; i++){
            e = sc.nextInt();
            f = sc.nextInt();
            c = sc.nextInt();
            
            if((e+f)>=c && c>1){
                latas = (e+f);
                do{
                    gaseosas = (latas/c);
                    latas -= gaseosas*c;
                    temp += gaseosas; 
                    latas += gaseosas; 
                }while(latas >= c);
                System.out.println(temp);
            }else{
                System.out.println("0");
            }
            latas=0;
            gaseosas=0; 
            temp=0;
        }
    }
}
