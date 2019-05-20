#include <stdio.h>

void main()
{
char ch;
scanf("%c",&ch);
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
printf("Alphabets"); 
else
printf("No");
    
}
