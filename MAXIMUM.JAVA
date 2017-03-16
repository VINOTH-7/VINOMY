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
		int a[]=new int[100];
		int i;
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(i=0;i<n;i++)
		a[i]=sc.nextInt();
		int max=0;
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			max=a[i];
		}
		System.out.println(max);
	}
}
