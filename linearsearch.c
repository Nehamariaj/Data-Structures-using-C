#include<stdio.h>
void main()
{
int i,limit,flag=0,count=0,x;
count+=2;
printf("enter the no of elements");
scanf("%d",&limit);
count++;
int a[limit];
count++;
printf("enter the numbers:");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
printf("enter a number:");
scanf("%d",&x);
count++;
for(i=0;i<limit;i++)
{
count++;
if (a[i]==x)
{
count++;
  flag++;
  count++;
  printf("position of %d=%d\n",x,i);
  count++;
  }
 }
 if(flag>0)
 {
 count++;
 printf("%d is present\n",x);
 count++;
 }
 else
 {
 count++;
 printf("%d is not present\n",x);
 count++;
 }
 count+=2;
 printf("time complexity=%d\n",count);
 printf("space complexity=%d\n",20+(4*limit));
 } 

