#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the three number");
scanf("%d%d%d',&a,&b,&c);
if(a>=b&&a>=c)
printf("a is large");
elseif(b>=a&&b>=c)
printf("b is large");
elseif(c>=a&&c>=b)
printf("c is large");
else
return 0;
}
