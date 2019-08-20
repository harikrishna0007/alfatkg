/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class ReverseWords { 
  
    public static void main(String[] args) 
    { 
       Scanner s=new Scanner(System.in);
     String a=s.nextLine();
     String b[]=a.split(" ");
     for(int i=0;i<b.length;i++)
     {
     if(i%2==0)
     {
     for(int j=b[i].length()-1;j>=0;j--)
     {
     System.out.print(b[i].charAt(j));
     }
     System.out.print(" ");
     }
     else
     {
     System.out.print(b[i]);
     System.out.print(" ");
     }
     }
    } 
} 
