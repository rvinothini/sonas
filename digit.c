#include<stdio.h>
int main()
{
int n,i=0;
printf("Enter theb number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
i++;
}
printf("%d",i);
}
