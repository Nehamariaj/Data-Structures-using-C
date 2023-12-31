#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
}*temp,*head;

int item;

void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void display();

void main(){
int choice;
while(choice!=8){
printf("-->Enter the operation to be done:\n");
printf("INSERTION:1.at first 2.at end 3.at any position\n");
printf("DELETION: 4.at first 5.at end 6.at any position\n");
printf("7.display 8.exit\nchoice:");
scanf("%d",&choice);

switch(choice){
case 1:{
 insert_begin();
 break;
 }
 case 2:{
 insert_end();
 break;
 }
 case 3:{
 insert_pos();
 break;
 }
 case 4:{
 delete_begin();
 break;
 }
 case 5:{
     delete_end();
     break;
 }
 case 6:{
     delete_pos();
     break;
 }
 case 7:{
 display();
 break;
 }
 case 8:{
     printf("EXITED!!");
     break;
 }
 default:{
     printf("WRONG CHOICE!!Enter numbers from 1 to 8 only\n");
 }
 }
 printf("\n");
 }
 }
 
void insert_begin(){
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node*));
if(temp==NULL){
printf("underflow");
}
else{
printf("enter the value:");
scanf("%d",&item);
temp->data=item;
temp->link=head;
head=temp;
}
}

void insert_end(){
struct node*temp;
struct node*ptr;
temp=(struct node*)malloc(sizeof(struct node*));
printf("enter the value:");
scanf("%d",&item);
temp->data=item;
temp->link=NULL;
if(head==NULL){
head=temp;
ptr=temp;
}
else{
ptr=head;
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link=temp;

}
}

void insert_pos(){
struct node*temp;
struct node*ptr;
int pos,i=1;
temp=(struct node*)malloc(sizeof(struct node*));
printf("enter the value:");
scanf("%d",&item);
temp->data=item;
if (head==NULL){
head=temp;
ptr=head;
}
else{
printf("enter the position:");
scanf("%d",&pos);
ptr=head;
if (pos==1){
temp->data=item;
temp->link=head;
head=temp;}
else{
while(i<pos-1&&(ptr->link!=NULL)){
ptr=ptr->link;
i++;
}
if(ptr->link==NULL)
printf("search fails\n");
else
{
temp->link=ptr->link;
ptr->link=temp;
}
}
}
}

void delete_begin(){
struct node *ptr;
if(head==NULL){
printf("underflow\n");
}
else{
ptr=head;
head=ptr->link;
free(ptr);
}
}

void delete_end(){
  struct node *ptr;
  if(head==NULL){
printf("underflow\n");
}
  else if(head->link==NULL){
      ptr=head;
      head=NULL;
      free(ptr);
  }
  else{
      ptr=head;
      temp=head->link;
      while(temp->link!=NULL){
          ptr=temp;
          temp=temp->link;
      }
      ptr->link=NULL;
      free(temp);
  }
}

void delete_pos(){
    struct node*temp;
    struct node*ptr;
    int pos;
    temp=head;
    if(head==NULL){
    printf("underflow\n");
    }
    else if(head->link==NULL){
      ptr=head;
      head=NULL;
      free(ptr);
  }
    else{
    printf("enter the position:");
    scanf("%d",&pos);
    int i=1;
    if(pos==1){
    ptr=head;
    head=ptr->link;
    free(ptr);
    }
    else{
    temp=head;
        while(i<pos-1&&(temp->link!=NULL)){
            temp=temp->link;
            i++;
        }
        if (temp->link==NULL){
        printf("search fails\n");
        }
       else{
        ptr=temp->link;
        temp->link=ptr->link;
        free(ptr);
    }
    }
    }
}
void display(){
struct node *ptr;
if(head==NULL){
    printf("NO ELEMENTS TO DISPLAY!!\n");
}
else{
printf("ELEMENTS:");
ptr=head;
while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->link;
}
printf("\n");
}
}

