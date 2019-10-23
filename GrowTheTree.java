package com.siddhu;
import java.util.Arrays;
import java.util.Scanner;
public final class GrowTheTree {
    private static int calcSum(int[] sticksVal, int start, int end){
        int sum=0;
        for(int i=start;i<end;i++)
            sum=sum+sticksVal[i];
        return sum;
    }
    public static void main(String[] args) throws Exception{
        Scanner scanner=new Scanner(System.in);
        int numSticks=scanner.nextInt();
        int[] sticksVal=new int[numSticks];
        for(int i=0;i<numSticks;i++) {
            sticksVal[i]=scanner.nextInt();
        }
        Arrays.sort(sticksVal);
        int mid=(sticksVal.length)/2;
        int firstSum=calcSum(sticksVal,0,mid);
        int endSum=calcSum(sticksVal,mid,sticksVal.length);
        int ans=(firstSum*firstSum)+(endSum*endSum);
        System.out.println(ans);
    }
}
