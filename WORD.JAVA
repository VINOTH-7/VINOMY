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
		char a;
		for(int i=0;;i++)
		
		{
			
			a=sc.next().charAt(i);
			if(a=='q'||a=='Q')
			break;
			else
			System.out.println(a);
		}
	}
}
