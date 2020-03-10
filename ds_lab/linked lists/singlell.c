#include <stdio.h>
#include <stdlib.h>
struct node
{
                int info;
                struct node* next;
};
void insert_beg(struct node**h,int x)
{
      struct node* new_node;
      new_node = malloc(sizeof(struct node));
      if(new_node == NULL)
      {
                      printf("overflow");
                      exit;
      }
      new_node->info=x;
      new_node->next=NULL;
      new_node->next = *h;
      *h = new_node;
}
void insert_end(struct node**h,int y)
{
                struct node* ptr;
                struct node* new_node;
                new_node = malloc(sizeof(struct node));
                if(*h==NULL)
                {
                                new_node->info=y;
                                new_node->next=NULL;
                                new_node->next = *h;
                                *h = new_node;
                }
                else
                {
                                ptr = *h;
                                while(ptr->next!= NULL)
                                {
                                                ptr = ptr->next;
                                }
                                new_node->info = y;
                                new_node->next = NULL;
                                ptr->next = new_node;
                }
}
print_ll(struct node *h)
{
                struct node* ptr;
                ptr = h;
                while(ptr!=NULL)
                {
                                printf("%d\t",ptr->info);
                                ptr=ptr->next;
                }
                printf("\n");
}
void addll(struct node *first,struct node *second)
{
  struct node *res=NULL;
  int x;
  while(first!=NULL||second!=NULL)
  {
    x= first->info+second->info;
    insert_beg(&res,x);
    first=first->next;
    second=second->next;
  }
  print_ll(res);
}
void main()
{
          struct node* head = NULL;
          struct node* tail = NULL;
          insert_beg(&head,2);
          insert_beg(&head,3);
          insert_beg(&head,4);
          print_ll(head);
          insert_beg(&tail,5);
          insert_beg(&tail,1);
          insert_beg(&tail,4);
          print_ll(tail);
          addll(head,tail);


}
