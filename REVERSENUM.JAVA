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
		int t=a;
		int rev=0;
		while(t!=0)
		{
			int rem=t%10;
			rev=(rev*10)+rem;
			t=t/10;
		}
		System.out.println("The reverse of" +a+ "is" +rev);
	}
}
