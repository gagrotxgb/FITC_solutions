#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t,n,b,zc,i;
	long int sum;
	scanf("%d",&t);
	while(t--)
	{ sum=0;
	  scanf("%d",&n);
	  zc=0;
	  for(i=0;i<n;i++)
	  { scanf("%d",&b);
	    if(b==0) zc++;
	    else sum+=b;
	  }
	  if(sum<100)
	  { printf("NO\n");
	  }
	  else
	  { if(sum==100) printf("YES\n");
	    else if((sum-100)<(n-zc)) printf("YES\n");
	    else printf("NO\n");
	  }
	}
	return 0;
}

