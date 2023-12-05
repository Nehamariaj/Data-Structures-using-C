#include<stdio.h>
void main(){
    int limit;
    printf("enter the number of inputs:");
    scanf("%d",&limit);
    int a[limit];
    printf("enter the numbers:");
    for(int i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
    for(int i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int i=1,j,t;
    while(i<limit){
        j=i;
        while(a[j]<a[j-1] && j>0){
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j=j-1;
        }
        i=i+1;
    }
    printf("the sorted array is:\n");
    for(int i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
