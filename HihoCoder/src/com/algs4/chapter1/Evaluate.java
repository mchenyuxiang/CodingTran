package com.algs4.chapter1;

import edu.princeton.cs.algs4.Stack;
import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdOut;

/**
 * Created by mchenyuxiang on 2016/12/27.
 * Dijkstra 的双栈算术表达式求值算法
 */
public class Evaluate {
    public static void main(String[] args) {
        Stack<String> ops = new Stack<String>();
        Stack<Double> vals = new Stack<Double>();
        String s;
        while(!(s = StdIn.readString()).equals("a")){
            if(s.equals("("))
                ;
            else if(s.equals("+"))
                ops.push(s);
            else if(s.equals("-"))
                ops.push(s);
            else if(s.equals("*"))
                ops.push(s);
            else if(s.equals("/"))
                ops.push(s);
            else if(s.equals("sqrt"))
                ops.push(s);
            else if(s.equals(")")){
                String op = ops.pop();
                double v=vals.pop();
                if(op.equals("+"))
                    v=vals.pop() + v;
                else if(op.equals("-"))
                    v=vals.pop() - v;
                else if(op.equals("*"))
                    v=vals.pop() * v;
                else if(op.equals(("/")))
                    v=vals.pop() / v;
                else if(op.equals("sqrt"))
                    v=Math.sqrt(v);
                vals.push(v);
            }
            else
                vals.push(Double.parseDouble(s));
        }
        StdOut.println(vals.pop());
    }
}
