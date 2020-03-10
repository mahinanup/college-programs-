#include<stdio.h>
#include<stdlib.h>
struct node
{
                int info;
                struct node* next;
                struct node* pre;
};
void insert_beg(struct node**h,int x)
{
      struct node* new_node;
      struct node* ptr;
      ptr = *h;
      new_node = malloc(sizeof(struct node));
      if(new_node == NULL)
      {
                      printf("overflow");
                      exit;
      }
      new_node->info=x;
      new_node->next=ptr;
      new_node->pre=NULL;
      if(*h!=NULL)
      {
        ptr->pre = new_node;

      }
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
                                new_node->pre=NULL;
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
                                new_node->pre=ptr;
                }
}
print_ll(struct node *h)
{
                struct node* ptr;
                struct node* last;
                ptr = h;
                while(ptr != NULL)
                {
                                printf("%d\t",ptr->info);
                                last = ptr;
                                ptr=ptr->next;
                }
                while(last != NULL)
  {
                  printf("%d\t",last->info);
                  last=last->pre;
  }



}
void main()
{
          struct node* head = NULL;
          insert_beg(&head,10);
          insert_beg(&head,6);
          insert_beg(&head,14);
          insert_end(&head,9);
          insert_end(&head,20);
          print_ll(head);

}
