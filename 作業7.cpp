#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int n,x,z;   	
 printf("請輸入一個整數:");
 scanf("%d",&n);
 z=(n*(n+1)/2);
 printf("答案");
  for(x =1; x<=n; x++)
  {
    if(x!=n)
     printf("%d+",x);
	else  
     printf("%d=%d",x,z);
  }
 return 0;
    

}
