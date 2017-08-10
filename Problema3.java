/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.eazuaraa.a02;

/**
 *
 * @author eazuara
 */
public class Problema3 {
     public static int mult (int[] vector,int n){
        if(n==0){
            return vector[0];
        }else
            return mult(vector,n-1)*vector[n];
        
    }

}
}
