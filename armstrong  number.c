#include<stdio.h>
int power(int,int);)
{
int n,sum=0,temp,remainder,digit=0;
printf("input an integer\n");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
digits++;
temp=temp/10;
}
temp=n;
while(temp!=0)
{
remainder=temp%10;
sum=sum+power(remainder,digits);
temp=temp/10;
}
if(n==sum)
printf("%d is an armstrong number.\n",n);
else
printf("%d is not an armstrong number.\n",n);
return 0;
}
int power (int n,int r)
{
int c,p=1;
for(c=1;c<=r;c++)
p=p*n;
return p;
}
