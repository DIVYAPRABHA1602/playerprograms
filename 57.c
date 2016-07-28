#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*p;
void main()
{
int ch;
clrscr();
printf("\n 1.enqueue 2.dequeue 3.exit");
do
{
printf("enter ur choice");
scanf("%d",&ch);
switch(ch)
{
case1: enqueue();
display();
break;
case 2: dequeue();
display();
break;
case 3: exit(0);
break;
default:printf("\n invalid choice");
break;
}
}
while(ch!=3);
getch();
}void enqueue()
{
int i,n;
printf("\n enter the no of nodes");
scanf("%d",&ch);
for(i=1;i<=n;i++)
{
if(head==NULL)
{
head=(struct node *)malloc(size of(struct node));
printf("\n enter value of node");
scanf("%d",&head->data);
head->next=NULL;
}
else
{
temp=(struct node)malloc(size of(struct node));
printf("enter  value of node");
scanf("%d",&temp->data);
temp->next=head;
head=temp;
}}}
void dqueue()
{
head=head->next;
}
void display()
{
q=head;
while(q->next!=NULL)
{
printf("%d",q->data);
q=q->next;
}
printf("%d",q->data);
}

