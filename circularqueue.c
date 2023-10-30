#include<stdio.h>
int rear=-1,front=-1,item,a[50],max_size;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
int choice;
printf("enter the limit:");
scanf("%d",&max_size);
while(choice!=5)
{
printf("-->enter the operation to perform\n1.enqueue 2.dequeue 3.peek 4.display 5.exit\nchoice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
enqueue();
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
peek();
break;
}
case 4:
{
display();
break;
}
case 5:
{
printf("EXITED!!");
break;
}
}
printf("\n");
}
}
void enqueue()
{
if(front==-1&&rear==-1)
{
front=0;
rear=0;
printf("enter the item:");
scanf("%d",&item);
a[rear]=item;
}
else if(front==(rear+1)%max_size)
{
printf("overflow\n");
}
else
{
rear=(rear+1)%max_size;
printf("enter the number:");
scanf("%d",&item);
a[rear]=item;
}
}
void dequeue()
{
if(rear==-1&&front==-1)
{
printf("underflow\n");
}
else if(rear==front)
{
item=a[front];
front=-1;
rear=-1;
}
else
{
item=a[front];
front=(front+1)%max_size;

}
}
void peek()
{
if(rear==1&&front==-1)
printf("underflow\n");
else
printf("front element=%d\n",a[front]);
}
void display()
{
int i;
if(front==-1)
{
printf("underflow\n");
}
else
{
printf("The ELEMENTS IN QUEUE:\n");
printf("position element\n");
for(i=front;i!=rear;i=(i+1)%max_size)
{
printf("  %d        ",i);
printf("%d\n",a[i]);
}
printf("  %d        ",rear);
printf("%d\n",a[i]);
printf("Position of Front=%d\n",front);
printf("Position of Rear=%d",rear);
printf("\n");
}
}
