#include<stdio.h>
#include<stdlib.h>
#define MAX 4
front=-1;
rear=-1;
int q=max;
void Enqueue(int ele)
{
 rear=(rear+1)%MAX;
 if(rear==front)
  {
    printf("Queue is full");
    exit(0);
   }
void main()
{
 int ch,op=1,ele;
 while(op)
 {
  printf("\n 1.INSERT 2.DELETE 3.DISPLAY\n");
  printf("\n Enter your choice:");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1:printf("enter element to be inserted:");
   scanf("%d",&ele);
   Enqueue(ele);
   break;

   case 2:ele=dequeue();
          break;
 
   case 3:display();
          break;
 
  printf("Do you want to continue(0/1");
  scanf("%d",opt);
  }
 }
}



