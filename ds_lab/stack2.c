#include <stdio.h>
#include<stdlib.h>
struct Stack{
    int info;
    struct Stack *next;
};
void main(){
  struct Stack *root;
  struct Stack *head = CreateStackElement(6);
  push(head,ptr);
}
struct Stack * CreateStackElement(int value){
    struct Stack *ptr = (struct Stack *)malloc(sizeof(struct Stack));
    ptr->info=value;
    return(ptr);
  }
void Push(struct Stack *head, struct Stack* ptr){
    ptr->next=head;
    head=ptr;
}
int Pop(struct Stack *head){
    struct Stack *toPop=head;
    head=head->next;
    int value=toPop->info;
    free(toPop);
    return(value);
}
