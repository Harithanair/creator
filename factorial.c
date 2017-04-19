#include<stdio.h>
int main()
{
int c,n,fact=1;
printf("enter a number to valculate it's fctorial\n");
scanf("%d",&n);
for(c=1;c<=n;c++)
fact=fact*c;
printf("factorial of %d=%d\n",n,fact);
return 0;
}
