package com.hihocoder.hiho1032;

import java.util.*;

/**
 * Created by mchenyuxiang on 2016/12/1.
 */
public class Main {
    public static void main(String[] args) {
        Scanner sin = new Scanner(System.in);
        String a,b;

        while(!sin.hasNext("0")){
            a = sin.next();
            boolean flag = hasCicle(a);
            System.out.println("是不是回文？" + flag);
        }
    }

    /**
     * 判断是否是
     * @param str 参数
     * @return True or Flase
     */
    public static boolean hasCicle(String str){
        boolean flag = true;
        int strLen = str.length();
        int halfLoc = (int) Math.ceil(strLen/2.0f);
        String frontStr = str.substring(0,halfLoc);
        String behindStr = str.substring(halfLoc,strLen);
        String revBehindStr = strReverse(behindStr);
        for(int i=0;i<behindStr.length();i++){
            if(frontStr.charAt(i) != revBehindStr.charAt(i)){
                flag = false;
                break;
            }
        }
        return flag;
    }

    /**
     * 字符串反转函数
     * @param str
     * @return
     */
    public static String strReverse(String str){
        String reStr = "";
        for(int i=str.length()-1; i>=0; i--){
            char c = str.charAt(i);
            reStr += c;
        }
        return reStr;
    }
}
