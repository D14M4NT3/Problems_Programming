/*
    Name: J - Cacho
    Copyright: CCPL 2017 - Round 1 
    Author: (KomoLoZupo) - Jeison Sierra, Christian Gutierrez, "Daniel"
    Date: 18/02/2017
*/

import java.util.Scanner;

public class cacho {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n,k,kt,count=0;
        n = sc.nextInt();
        for(int i=0; i<n; i++){
            k = sc.nextInt();
            for(int k1 = 0; k1 < 4; k1++){
                kt = sc.nextInt();
                if((k+1)==kt){
                    count++;
                    k = kt; 
                }
            }
            if(count == 4){
                System.out.println("Y");
            }else{
                System.out.println("N");
            }
            count = 0; 
        }
    }
}
