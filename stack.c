#include<stdio.h>
int top=-1,max_size,a[50],item;
void push();
void pop();
void peek();
void display();
void main()
{
int choice;
printf("enter the limit:");
scanf("%d",&max_size);
while(choice!=5)
{
printf("-->Enter the operation to perform\n1.push 2.pop 3.peek 4.display 5.exit\nchoice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
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
}
}
printf("\n");
}
}
void push()
{
if(top<max_size-1)
{
top=top+1;
printf("enter the number:");
scanf("%d",&item);
a[top]=item;
}
else
{
printf("OVERFLOW\n");
}
}
void pop()
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else
{
item=a[top];
top=top-1;
}
}
void peek()
{
if(top!=-1)
printf("topmost element=%d\n",a[top]);
else
printf("UNDERFLOW\n");
}
void display()
{
if(top!=-1)
{
printf("the elements in array:");
for(int i=0;i<=top;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
else
printf("UNDERFLOW\n");
}


