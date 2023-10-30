#include <stdio.h>

void main() {
    int i,j,limit,temp,count=0;
    count+=2;
    printf("enter the limit:");
    scanf("%d",&limit);
    count+=2;
    int a[limit];
    printf("enter the numbers:");
    for(i=0;i<limit;i++)
    {
        count++;
        scanf("%d",&a[i]);
        count++;
    }    
    
    for(i=0;i<limit;i++)
    {
        count++;
        for(j=i+1;j<limit;j++)
        {
            count++;
            if(a[i]>a[j])
            {
                count++;
                temp=a[i];
                count++;
                a[i]=a[j];
                count++;
                a[j]=temp;
                count++;
            }
        }
    }
    printf("\nSorted array: ");
    for(i=0;i<limit;i++)
    {
        count++;
        printf("%d ",a[i]);
        count++;
    }
    count+=2;
    printf("\ntime complexity=%d",count);
    printf("\nspace complexity=%d",(40+(4*limit)));
}
