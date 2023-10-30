#include<stdio.h>

void main()
{
int row,column,i,j;
printf("enter the order of the matrix:");
scanf("%d%d",&row,&column);
int a[row][column];
printf("enter the values of the sparse matrix:");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("sparse matrix:\n");
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
int k=1,count=0;
struct sparse
{
int rows;
int columns;
int value;
}b[50];
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
if(a[i][j]!=0)
{
b[k].rows=i;
b[k].columns=j;
b[k].value=a[i][j];
k++;
count++;
}
}
}
b[0].rows=row;
b[0].columns=column;
b[0].value=count;
printf("tuple representation:\n");
printf("row column value\n");
for(i=0;i<k;i++)
{
printf(" %d     %d     %d",b[i].rows,b[i].columns,b[i].value);
printf("\n");
}
}

