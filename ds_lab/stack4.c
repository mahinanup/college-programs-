#include<stdio.h>
#include<stdlib.h>
struct stack
{
    struct stack *next;
    int info;
};
void push(struct stack **start,int data)
{
  struct stack *new_node=(struct stack*)malloc(sizeof(struct stack));
  new_node->info=data;
  new_node->next= *start;
  *start = new_node;
}
void display(struct stack *start)
{
  while(start)
  {
    printf("%d\n",start->info);
    start = start->next;
  }
}
int pop(struct stack **start)
{
  int a;
  struct stack *temp;
  a = (*start)->info;
  temp = *start;
  (*start) = (*start)->next;
  free(temp);
  return a;
}
int top(struct stack *start)
{
    return (start->info);
}
void insert(struct stack **start, int a)
{
    if ( *start == NULL || a > top(*start))
    {
        push(start, a);
        return;
    }
    int temp = pop(start);
    insert(start, a);
    push(start, temp);
}
void sortStack(struct stack **start)
{
    if (*start!=NULL)
    {
        int a = pop(start);
        sortStack(start);
        insert(start, a);
    }
  }

void main()
{
  struct stack *top= NULL;
  push(&top,3);
  push(&top,6);
  push(&top,9);
  push(&top,1);
  printf("Stack before sorting \n");
  display(top);
  printf("_________________\n");
  printf("Stack after sorting function \n");
  sortStack(&top);
  display(top);

}
