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
		int flag=0;
		for(int i=2;i<=a/2;i++)
		if(a%i==0)
		{
			flag=1;
			break;
		}
		if(flag==0)
		System.out.println(a+"prime number");
		else
		System.out.println(a+"not a prime number");
	}
}
