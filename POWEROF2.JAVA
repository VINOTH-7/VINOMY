/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public int fun(int x)
	{
		int count=0,b,c=1;
		b=x;
		while(b!=0)
		{
			if(b%2==0)
			count++;
			else
			break;
			b=b/2;
		}
		for(int i=count;i>0;i--)
		c=c*2;
		if(c==x)
		System.out.println(x +"is a power of 2");
		else
		System.out.println(x +"is not a power of 2");
		return 0;
		}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Ideone obj=new Ideone();
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		obj.fun(a);
	}
}
