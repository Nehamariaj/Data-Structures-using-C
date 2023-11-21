#include<stdio.h>

void main(){
int pos,limit,i,n;
printf("enter the number of nodes:");
scanf("%d",&n);
int t[n];
printf("enter the elements of binary tree: ");
for(i=1;i<=n;i++){
scanf("%d",&t[i]);
}
char choice='y';
while(choice=='y'){
printf("\nenter the position of node:");
scanf("%d",&pos);
if(pos==0)
printf("No Element at position 0\n");
else{
if(pos/2==0)
   printf("No parent for %d\n",t[pos]);
else 
   printf("Parent of %d=%d\n",t[pos],t[pos/2]);
if((2*pos)>n)
   printf("No left child for %d\n",t[pos]);
else 
   printf("Left child of %d=%d\n",t[pos],t[2*pos]);
if((2*pos)+1>n)
   printf("No right child for %d\n",t[pos]);
else 
   printf("right child of %d=%d\n",t[pos],t[(2*pos)+1]);
 }
 printf("Do you want to continue?(y/n)choice:");
 scanf(" %c",&choice);
 printf("\n");
 }
 }
