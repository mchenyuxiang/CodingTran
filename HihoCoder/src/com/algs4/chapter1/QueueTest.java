package com.algs4.chapter1;

import edu.princeton.cs.algs4.In;
import edu.princeton.cs.algs4.Queue;


/**
 * Created by mchenyuxiang on 2016/12/27.
 * 读取文件中的内容，并返回。先进先出的规则
 */
public class QueueTest {
    public static void main(String[] args) {
        String name="D:/system/JAVA/CodingTran/HihoCoder/file/queue";
        int[] a = readInts(name);
        for(int i=0; i<a.length; i++){
            System.out.println("i:"+a[i]);
        }

    }

    public static int[] readInts(String name) {
        In in = new In(name);
        Queue<Integer> q = new Queue<Integer>();
        while (!in.isEmpty()) {
            q.enqueue(in.readInt());
        }
        int N = q.size();
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = q.dequeue();
        }
        return a;
    }
}
