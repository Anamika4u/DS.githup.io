#include<stdio.h>
#include<alloc.h>
#include<stdlib.h>
#include<conio.h>
typedef struct lklist{
int info;
struct lklist *next;
}node;
void main()
{
int ch,data,i=1,item;
node *head=NULL,*temp,*ptr;
clrscr();
while(1){
printf("menu is\n");
printf("1:insert at begining\n");
printf("2:traversing link\n");
printf("3:insert at end\n");
printf("4:searching\n");
printf("5:insert afterelement\n");
printf("6:deletion at begining\n");
printf("7:deletion at end\n");
printf("8:exit\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter data\n");
scanf("%d",&data);
temp=(node*)malloc(sizeof(node));
temp->info=data;
if(head!=NULL)
{
temp->next=head;
}
else
{
temp->next=NULL;
}
head=temp;
break;
case 2:
temp=head;
printf("traversing\n");
while(temp!=NULL)
{
printf("%d",temp->info);
temp=temp->next;
}
break;
case 3:
temp=head;
printf("enter data to be entered\n");
scanf("%d",&data);
ptr=(node*)malloc(sizeof(node));
ptr->info=data;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
break;
case 4:
temp=head;
printf("enter data to be searched\n");
scanf("%d",&data);
while(temp!=NULL)
{
if(data==temp->info)
{
printf("data is found at %d\n",i);
break;
}
else
{
temp=temp->next;
}
i++;
}
break;
case 5:
temp=(node*)malloc(sizeof(node));
printf("enter item after which you want to enter\n");
scanf("%d",&item);
ptr=head;
while(ptr!=NULL)
{
if(ptr->info==item)
{
break;
}
ptr=ptr->next;
}
if(ptr==NULL)
{
printf("item not found so searching can not happen");
break;
}
else{
printf("enter data\n");
scanf("%d",&data);
temp->info=data;
temp->next=ptr->next;
ptr->next=temp;
}
break;
case 6:
ptr=head;
head=head->next;
free(ptr);
break;
case 7:
ptr=head;
while((ptr->next)->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=NULL;
ptr=ptr->next;
free(ptr);
break;
case 8:
exit(1);
default:
printf("wrong choice");
}
}
}



