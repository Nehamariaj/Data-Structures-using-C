#include<stdio.h>

void quickSort(int l,int h,int a[]);
int partition(int l,int h,int a[]);

int main(){
    int limit,i,l,h;
    printf("enter the limit:");
    scanf("%d",&limit);
    int a[limit];
    printf("enter the elements:");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("before sorting:\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    quickSort(0,limit-1,a);
    printf("\nafter sorting:\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void quickSort(int l,int h,int a[]){
    int j;
    if(l<h){
        j=partition(l,h,a);
        quickSort(l,j-1,a);
        quickSort(j+1,h,a);
    }
}

int partition(int l,int h,int a[]){
    int pivot,i,j,temp;
    pivot=a[l];
    i=l+1;
    j=h;
    while(i<=j){
        while(i<=j && a[i]<=pivot){
            i++;
        }
        while(i<=j && a[j]>pivot){
            j--;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}
