#include<stdio.h>

int fb(int n) {
    int f0 = 0,f1 = 1,fn = 1;
    int i;
    if (n < 0)
        return -1;
	else if (n == 0 || n == 1) 
        	return n;
 	 	else 
		{  	for (i = 2; i < n; i++) 
        	{  	f0 = f1;
            	f1 = fn;
            	fn = f0 + f1;
        	}	
    }
    return fn;
}
int fb1(int n)
{
	if (n==0||n==1) return n;
	else return (fb1(n-1)+fb1(n-2));
}
int main()
{
   int i,n,d=0;
   scanf("%d",&n);
   for(i=0;i<=n;i++)
       printf("So thu %d: %d\n",i,fb1(i));
}

