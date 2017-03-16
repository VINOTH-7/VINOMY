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
		String str1,str2;
		Scanner sc =new Scanner(System.in);
		str1=sc.next();
		str2=sc.next();
		char a[]=str1.toCharArray();
		char b[]=str2.toCharArray();
		for(int i=0;i<str1.length();i++)
		{
			int c=a[i]+10;
			a[i]=(char)c;
		}
		for(int i=0;i<str2.length();i++)
		{
			if(i>0&&i<str2.length()-1)
			{
				int c=b[i]+10;
				b[i]=(char)c;
			if(b[i]>122||(b[i]<97&&b[i]>90))
			{
				c=b[i]-26;
				b[i]=(char)c;
			}
			}
			else
			b[i]=b[i];
		}
		str1=String.valueOf(a);
		str2=String.valueOf(b);
		System.out.println(str1+" "+str2);
	}
}
