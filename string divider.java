import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        //int outStrIndx=0;
        if ((0<T)&(T<11)){
             //String outS="";
             for (int i=0;i<T;i++){
                 String outS = "";
                 String inStr=scanner.nextLine();
                 int inStrL=inStr.length();
                 char[] inS=inStr.toCharArray();
            
                if ((2<=inStrL)&(inStrL<=10000)){
                    for (int inStrIndx = 0; inStrIndx < inStrL; inStrIndx += 2) {
                        //if (inS[inStrIndx] != '\0') {
                            outS += inS[inStrIndx];
                            //outStrIndx += 1;
                        //}
                    }

                    outS += ' ';

                    for (int inStrIndx = 1; inStrIndx < inStrL; inStrIndx += 2) {
                       // if (inS[inStrIndx] != '\0') {
                            outS += inS[inStrIndx];
                            //outStrIndx += 1;
                        //}
                    }

                    //outS += '\n'; 
                    System.out.println(outS);  
                }   
                

             }
            

            //System.out.println(outS);
        
        }
          scanner.close(); 
    }
}

