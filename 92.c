#include<stdio.h>
void main()
{
long num,deci_num,rem,rem1,octal=0,base=1,bi=0,bs=1,n1;
printf("\n enter deci");
scanf("%ld",&num);
deci_num=num;
n1=num;
while(num>0)
{
rem=num%2;
bi=bi+rem*base;
num=num/2;
base=base*10;
}
printf("\n binary%ld\n",bi);
while(n1>0)
{
rem1=n1%8;
octal=octal+rem1*bs;
n1=n1/8;
bs=bs*10;
}
printf("octal number is=%ld\n ",octal);
}
