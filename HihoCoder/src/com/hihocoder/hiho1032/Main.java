package com.hihocoder.hiho1032;

import java.util.*;

/**
 * Created by mchenyuxiang on 2016/12/1.
 */
public class Main {
    public static void main(String[] args) {
        Scanner sin = new Scanner(System.in);
        String a,b;
        int count = sin.nextInt();
        String[] strArray = new String[count];

        for(int i=0;i < count;i++){
            a = sin.next();
            strArray[i] = a;
        }
        for(int i=0;i < count; i++){
//            int length = mostCicle(strArray[i]);
            int length = midlleCicle(strArray[i]);
            System.out.println(length);
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
     * @return 返回翻转字符串
     */
    public static String strReverse(String str){
        String reStr = "";
        for(int i=str.length()-1; i>=0; i--){
            char c = str.charAt(i);
            reStr += c;
        }
        return reStr;
    }

    /**
     * 最大子串回文数长度，利用穷举法
     * @param str
     * @return
     */
    public static int mostCicle(String str){
        int count = 0;
        int flag = 1;
        int strLen = str.length();
        int changeStrLen = strLen;
        while(changeStrLen > 0 && flag == 1){
            int endLoc = strLen - changeStrLen;
            for(int i=0;i <= endLoc;i++){
               String subStr = str.substring(i,changeStrLen+i);
               if(hasCicle(subStr)){
                   count = changeStrLen;
                   flag = 0;
                   break;
               }
            }
            changeStrLen --;
        }
        return count;
    }

    /**
     * 利用中心扩展法来进行判断
     * @param str
     * @return
     */
    public static int midlleCicle(String str){
        int count = 0;
        String longestStr = str.substring(0,1);
        int strLength = str.length();
        for(int i=0; i < strLength; i++){
            String tempStr = helper(str,i,i);
            if(tempStr.length() > longestStr.length()){
                longestStr = tempStr;
            }

            // 偶数情况下判断
            tempStr = helper(str,i,i+1);
            if(tempStr.length() > longestStr.length()){
                longestStr = tempStr;
            }
        }
        count = longestStr.length();
        return count;
    }

    public static String helper(String str,int begin,int end){
        while(begin >= 0 && end <= str.length() - 1 && str.charAt(begin) == str.charAt(end)){
            begin --;
            end ++;
        }
        String subStr = str.substring(begin + 1, end);
        return subStr;
    }
}
