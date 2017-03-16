/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int temp,temp1,temp2;
		temp1=a;
		temp2=b;
while(b!=0)
{
temp=a%b;
a=b;
b=temp;
}
if(a==1)
System.out.println("\n The"+temp1+"and"+temp2+"are co-prime");
else
System.out.println("\n The"+temp1+"and"+temp2+"are not co-prime");
	}
}
