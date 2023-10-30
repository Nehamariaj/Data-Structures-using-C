#include<stdio.h>
void main()
{
int i,limit;
printf("enter the no of terms:");
scanf("%d",&limit);
struct poly
{
int coef;
int expo;
}a[60];
printf("enter the coefficients and constants:\n");
for(i=0;i<limit;i++)
{
scanf("%d%d",&a[i].coef,&a[i].expo);
}
printf("polynomial equation is:\n");
for(i=0;i<limit;i++)
{
if(i<limit-1)
{
printf("(%dx^%d)+",a[i].coef,a[i].expo);
}
else
{
printf("(%dx^%d)\n",a[i].coef,a[i].expo);
}
}
}

