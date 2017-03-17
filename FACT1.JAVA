/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	int fact(int x)
{
	if(x>0)
	return x*fact(x-1);
	else
	return 1;
}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Ideone obj=new Ideone();
		Scanner sc =new Scanner(System.in);
		int a=sc.nextInt();
		System.out.println(obj.fact(a));
	}
}
