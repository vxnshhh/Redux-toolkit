import java.util.*;

class RevNum
{
      public static void ReveNum(int m[])
      {
       int i; 
       for(i=9;i<=0;i++)
       {
        System.out.println(+m[i]);
       }
      }
      public static void main(String args[])
      {
         int i;
         Scanner sc=new Scanner(System.in);
         int []n = new int[10];
         System.out.print("enter a 10 number to reverse it:");
         for(i=0;i<10;i++)
          {
           System.out.println("enter num "+i+" :");
           n[i]=sc.nextInt();
          }
         System.out.print("the reverse number are :");
         ReveNum(n);
      }
}

