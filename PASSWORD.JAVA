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
		String a=sc.next();
		int sum=0;
		char b[]=a.toCharArray();
		for(int i=0;i<b.length;i++)
		{
			sum=sum+b[i];
		}
		System.out.format("%c",sum/b.length);
	}
}
