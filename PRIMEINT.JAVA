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
		int j;
		for(int i=a;i<=b;i++)
		{
			for(j=2;j<=i;j++)
			{
				if(i%j==0)
				break;
			}
			if(i==j)
			System.out.println(i);
		}
	}
}
