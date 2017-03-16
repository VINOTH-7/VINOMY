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
		int count=0,max=0,min=9,sum=0,sum1=1,sum2=0;
		char b[]=str.toCharArray();
		int a[]=new int[10];
		for(int i=0;i<str.length();i++)
		{
			if(b[i]>=48&&b[i]<=57)
			{
				a[count]=Character.getNumericValue(b[i]);
				count++;
			}
		}
		for(int i=0;i<count;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
		}
		for(int i=0;i<count;i++)
		{
			sum=sum+(a[i]*max);
			sum1=sum1*(a[i]+min);
		}
		do
		{
			while(sum>0)
			{
				sum2=sum2+(sum%10);
				sum=sum/10;
			}
			sum=sum2;
			sum2=0;
		}while(sum>9);
		do
		{
			while(sum1>0)
			{
				sum2=sum2+(sum1%10);
				sum1=sum1/10;
		}
		sum1=sum2;
		sum2=0;
	}while(sum1>9);
	if(sum>sum1)
	System.out.println("Sum:"+sum1*sum1);
	else
	System.out.println("Sum:"+sum*sum);
	
}
}
