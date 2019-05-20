#include <stdio.h>

void main()
{
int N,K,i,M[50],sum=0;
scanf("%d %d",&N,&K);
for(i=1;i<=5;i++)
scanf("%d",&M[i]);
for(i=1;i<=K;i++)
sum=sum+i;
printf("%d",sum);
}
