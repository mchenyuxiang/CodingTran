package com.hihocoder.hiho1032;

import java.util.Scanner;

/**
 * Created by mchenyuxiang on 2016/12/2.
 */
public class Test {
    public static void main(String[] args) {
        Scanner scin = new Scanner(System.in);
        String a = scin.next();
        String b = scin.next();
        int sum = 0;
        for(int i=0;i<a.length();i++){
            int c = a.charAt(i) & b.charAt(i);
            System.out.println(c+":"+Integer.toBinaryString(a.charAt(i))+":"+Integer.toBinaryString(b.charAt(i)));
        }
    }
}
