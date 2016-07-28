#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*p,*q;
void main()
{
int ch;
clrscr();
printf("\n 1.push \n 2,pop \n 3.exit");
do{
printf("enter ur choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
display();
break;
case 2:
pop();
display();
break;
case 3:
exit(0);
break;
default:printf("\n invalid choice");
break;
}
}while(ch!=3);
getch();
}
void push()
{
int i,n;
printf("\n enter no of nodes");
scanf("%d",&ch);
for(i=1;i<=n;i++)
{
if(head==NULL)
{
head = (struct node *)malloc (size of(struct node));
printf("\n enter the  value of node");
scanf("%d",&head->data);
head->next=NULL;
}
else
{
temp=(struct node*)mallo(size of(struct node));
printf("enter value of node");
scanf("%d",&temp->data);
temp->next=head;
head=temp;}}}
void pop()
{
head=head->next;
}
void display()
{
q=head;
while(q->next!=NULL)
{
printf("%d",q->data);
}
