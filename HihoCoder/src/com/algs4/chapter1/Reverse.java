package com.algs4.chapter1;

import edu.princeton.cs.algs4.StdIn;

import java.util.Scanner;
import java.util.Stack;

/**
 * Created by mchenyuxiang on 2016/12/15.
 */
public class Reverse {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        Scanner sc = new Scanner(System.in);
        while (!StdIn.isEmpty()){
            stack.push(StdIn.readInt());
        }


        for(int i: stack){
            System.out.println(i);
        }
    }
}
