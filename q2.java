
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int t=0;t<T;t++){
		    int N=sc.nextInt();
		    long sum=0;
		    int length=0;
		    for(int n=0;n<N;n++){
		        int x=sc.nextInt();
		        sum+=x;
		        if(x!=0){length++;}
		    }
		    long excess=sum-100;
		    if(excess<length && excess>=0){System.out.println("YES");}
		    else{System.out.println("NO");}
		}
	}
}
