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
		String str=sc.next();
		int count=0;
		char b;
		char a[]=str.toCharArray();
		for(int i=0;i!='\0';i++)
		if(a[i]==' ')
		count++;
		int j=0;
		for(int i=0;i<=count;i++)
		{
			for(;j!='\0';j++)
			{
				if((a[j]==' ')&&(i%2!=0))
				{
					for(int k=j-1;;k--)
					b=a[k];
					a[k]=a[k-1];
					a[k-1]=b;
				}
			}
		}
		System.out.println(a);
		}
}
