#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("a=");
scanf("%d",&a);
if(a>0)
printf("positive");
else if(a<0)
printf("negative");
else if(a==0)
printf("zero");
return 0;
}
