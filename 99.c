#include<stdio.h>
int n,n2,i,sum=0,mul,n1;
int rem();
void main()
{
printf("\n enter 10 digit isbn number");
scanf("%d",&n);
n2=n;
for(i=1;i<=10;i++)
{
n1=rem();
mul=n1*i;
sum=sum+mul;
}
printf("%d\n",sum);
if(sum%11==0)
{
printf("%d is an ISBN number\n",n2);
}
else
{
printf("%d is not an ISBN number\n",n2);
}
}
int rem()
{
int r1;
r1=n%10;
n=n/10;
return r1;
}
