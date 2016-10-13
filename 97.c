#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter the number to sum up the odd numbers: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{
sum+=i;
}
}
printf("Sum of odd digits in the range = %d \n",sum);
}
