#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int n,x,z;   	
 printf("�п�J�@�Ӿ��:");
 scanf("%d",&n);
 z=(n*(n+1)/2);
 printf("����");
  for(x =1; x<=n; x++)
  {
    if(x!=n)
     printf("%d+",x);
	else  
     printf("%d=%d",x,z);
  }
 return 0;
    

}
