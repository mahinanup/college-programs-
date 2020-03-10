#include<stdio.h>
#include<stdlib.h>
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
int lenght1(struct node *h)
{
    int count=0;
    struct node* ptr;
    ptr = h;
    while(ptr!=NULL)
    {
      count++;
      ptr=ptr->next;
    }
    return count;
}
int length2(struct node *h,int x)
{
  if(h!=NULL)
  {
    x++;
    length2(h->next,x);
  }
  else
  {
    return x;
  }
}
void main()
{
          int x,y;
          struct node* head = NULL;
          insert_beg(&head,10);
          insert_beg(&head,6);
          insert_beg(&head,9);
          insert_end(&head,20);
          x =lenght1(head);
          printf("the length of the linked list is %d",x);
          y = length2(head,0);
          printf("the length is %d",y);

}
