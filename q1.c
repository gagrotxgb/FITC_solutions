#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    long int n;
	    scanf("%d",&n);
	   int count=0;
	   int r,N;
       N=n;
      while(N>0)
      {
        r=N%10;
        if(r==5)
            count++;
        N/=10;
      }
	    printf("%d\n",count);
	}
	return 0;
}

