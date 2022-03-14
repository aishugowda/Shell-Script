#include<stdio.h>
#include<stdlib.h>
struct LinkedList
{
int data;
struct LinkedList*ptr;
};
typedef struct LinkedList*node;
node head=NULL;
node createNode()
{
node temp;
temp=(node)malloc(sizeof(struct LinkedList));
temp->ptr=NULL;
return temp;
}
node insert_end(int ele)
{
  node temp,p;
  temp=createNode();
  temp->data=ele;
  if(head==NULL)
  {
  head=temp;
  {
  else
  {
  p=head;
  while(p->ptr !=NULL)
  {
    p=p->ptr;
  }
  p=p->ptr;
  }
  retuen head;
}
node insert_begin(int ele)
{
node temp;
temp=createNode();
temp->data=ele;
if(head==NULL)
{
head=temp;
}
else
{
temp->ptr=head;
head=temp;
}
return head;
}
node delet_specfic(int ele)
{
node temp,prev;
temp=head;
if(head=NULL)
printf("\n Empty List!!");
else if(head->data==ele)
{
if(head->ptr!=NULL)
head=head->ptr;
else
head=NULL;
}
else
{
while(temp->data!=ele && temp->ptr!=NULL)
{
prev=temp;
temp=temp->ptr;
}
if(temp->ptr==NULL &&temp->data!=ele)
printf("specified item not found");
else if(temp->ptr!=NULL)
prev->ptr=NULL;
else
prev->ptr=NULL;
}
free(temp)
return(head);
}
node delet_begin()
{
node temp;
temp=head;
if(head==NULL)
printf("\n Empty List!!");
else if(head->ptr==NULL)
head=NULL;
else
head=head->ptr;
free(temp);
return head;
}
node delet_end()
{
node temp,prev;
temp=head;
if(head==NULL)
printf("\n Empty List!!");
else if(head->ptr==NULL)
head==NULL;
else
{
while(temp->ptr!=NULL)
{
   prev=temp;
   temp=temp->ptr;
 }
 prev->ptr=NULL;
 }
 free(temp);
 return head;
 }
 void display()
 {
 node temp;
 temp=head;
 if(head=NULL)
 {
 printf("\Empty List");
 return;
 }
 printf("\n Elements of the list are:");
 while(temp->ptr!=NULL)
 {
 printf("%d\t",temp->data);
 temp=temp->ptr;
 }
 printf("%d\t",temp->data);
 }
 int main()
 {
 int ele,opt=1ch;
 printf("\n singly linked list");
 while(opt)
 {
 printf("\n1.INSERT END\n2.DISPLAY\n3.INSERT BEGIN \n4.DELETE BEGIN\n5.DELETE END 6.DELETE SPECIFIED");
 printf("\n enter your choice");
 scanf("%d",ch);
 switch(ch)
 {
 case 1:printf("\n enter the value to be inserted");
        scanf("%d",&ele);
        insert_end(ele);
        break;
 case 2: display()
         break;
 case 3:printf("\n enter tne value to be inserted");
        scanf("%d",&ele);
        insert_begin(ele);
        break;
 case 4.:delet_begin();
        break;
 case 5:delet_end();
        break;
 case 6:printf("\n enter the key value");
       scanf("%d",&ele);
       delete_specfic(ele);
       break;
 default:
          printf("wrong choice");
          return 0;
 }
 printf("\n do you want to continue(0/1)?");
 return 0;
 }
 printf("\n do you want to continue(0/1)?");
 scanf("%d",&opt);
 }
 return 0;
 }                                    
                       
       
