#include<stdio.h>
#include<conio.h>
#define size 5
int item;
int s[10];
int top==-1;
void push()
{
if(top=size-1)
{
printf("\n stack is full");
return;
}
printf("\n enter item");
top++;
s[top]=item;
}
void pop()
{
if(top==-1)
{

printf("\n stack is empty");
return;
}

printf("\n deleted item%d",s[top]);
top--;
}
void display()
{
int i;
if(top==-1)
{
printf("\n stack is empty");
return;
}
printf("\n contenrtt of stack is :\n");
for(i=0;i<=top;i++)
{
printf("%d",s[i]);
}
void main()
{
int ch;
top=-1;
clrscr();
do{
printf("\n push 2.pop");
scanf("%d",&ch);
switch(ch)
{
case1:push();
break;
case 2:
pop();
break;
deafault:printf("\n wrog entry");
}while(ch!=4);
getch();
}
