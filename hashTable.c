//program to implement a hash table using linear probing
#include <stdio.h>
#include<stdlib.h>
void insert();
void display();
void search();

int TABLE_SIZE,h[50];

int main()
{
    int opt,i;
    printf("Enter the table size:");
    scanf("%d",&TABLE_SIZE);
    h[TABLE_SIZE]=0;
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                  printf(" EXITED!!\n");
                  exit(0);
        }
    }
}

void insert()
{

 int key,index,i,flag=0,hkey;
 printf("enter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {
     index=(hkey+i)%TABLE_SIZE;
     if(h[index] == 0)
     {
        h[index]=key;
        break;
     }
    }
    if(i == TABLE_SIZE)
    {
     printf("\nelement cannot be inserted\n");
    }
}
void search()
{

 int key,index,i,flag=0,hkey;
 printf("enter search element\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE; i++)
 {
    index=(hkey+i)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d\n",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("\n value is not found\n");
}
void display()
{
  int i;
  printf("\nelements in the hash table are \n");
  for(i=0;i< TABLE_SIZE; i++)
  {
    printf("\nat index %d \t value =  %d",i,h[i]);
  }
  printf("\n");
}
