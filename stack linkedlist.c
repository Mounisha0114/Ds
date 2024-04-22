#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
void inseret_front(int);
void delete_front();
void display();

NODE *head=NULL;
 int main()
 {
   int choice,item;
   while(1)
   {
     printf("\nMENU\n");
     printf("1.push\n");
     printf("2.pop\n");
     printf("3.display\n");
     printf("4.exit\n");
     printf("enter your choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:printf("enter the item to insert\n");
            scanf("%d",&item);
            inseret_front(item);
            break;
     case 2:delete_front();
            break;       
     case 3:display();
            break;
     case 4:exit(0);
     default: printf("invalid choice\n");
    }
   }
  }
  
void inseret_front(int item)
{
 NODE *temp;
 temp =(NODE *)malloc(sizeof(NODE));
 temp->data=item;
 temp->next=head;
 head = temp;
}

void delete_front()
{
  
  if(head == NULL)
  printf("list is empty\n");
  else
  { 
  NODE*temp;
  temp=head;
  head=head->next;
  printf("element is deleted:%d\n",temp->data);
  free(temp);
}
}

void display()
{
 NODE*temp=head;
 if(head == NULL)
 printf("list is empty\n");
 else
 {
   printf("list content:\n");
   while(temp!=NULL)
   {
     printf("%d",temp->data);
     temp=temp->next;
   }
  }
 }       
