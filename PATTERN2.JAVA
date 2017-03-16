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
		int n=sc.nextInt();
		for(int i=n*2;i>0;i-=2)
		{
			for(int j=0;j<=i;j++)
			{
				if(j==n)
				System.out.print(" ");
				else
				System.out.print("*");
			}
			n--;
			System.out.println("");
		}
	}
}
