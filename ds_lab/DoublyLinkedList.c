#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *pre;
    int info;
    struct node *next;
};
struct node * CreateANewNode(int value){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->pre=NULL;
    ptr->info=value;
    ptr->next=NULL;
    return (ptr);
}

void InsertANode(struct node *);
void InsertAtTheBeginning(struct node *, struct node *);
void InsertInTheMiddle(struct node *, struct node *, int);
void InsertAtTheEnd(struct node *, struct node *);

void DeleteANode(struct node *);
void DeleteAtTheBeginning(struct node *);
void DeleteInTheMiddle(struct node *, int);
void DeleteAtTheEnd(struct node *);

void main(){
    struct node *head=NULL;
}

void InsertANode(struct node *head){
    printf("Enter the value to put in the node.\n");
    int value;
    scanf("%d", &value);
    struct node *PTR = CreateANewNode(value);
    if (PTR == NULL) {
        printf("Overflow condition achieved. Exiting...");
    }
    else{
        printf("Where would you like to insert a node?\n1. The beginning.\n2. The end.\n3. The middle.\n");
        int ch;
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                InsertAtTheBeginning(head, PTR);
                break;
            }
            case 2: {
                InsertAtTheEnd(head, PTR);
                break;
            }
            case 3: {
                printf("At what position would you like it to be?\n");
                int n;
                scanf("%d", &n);
                InsertInTheMiddle(head, PTR, n);
            }
        }
    }
}
void InsertAtTheBeginning(struct node *head, struct node *ptr){
    ptr->next=head;
    head->pre=ptr;
    head=ptr;
}
void InsertInTheMiddle(struct node *head, struct node *ptr, int n){
    int i=0;
    struct node *temp=head;
    while(i<n-1){
        temp=temp->next;
        i++;
    }
    temp->pre->next=ptr;
    ptr->next=temp;
    ptr->pre=temp->pre;
    temp->pre=ptr;
}
void InsertAtTheEnd(struct node *head, struct node *ptr){
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->pre=temp;
}


void DeleteANode(struct node *head){
    if (head == NULL) {
        printf("Underflow condition achieved. Exiting...");
    } else {
        printf("From where would you like to delete a node?\n1. The beginning.\n2. The end.\n3. The middle.\n");
        int ch;
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                DeleteInTheBeginning(head);
                break;
            }
            case 2: {
                DeleteInTheEnd(head);
                break;
            }
            case 3: {
                printf("At what position would you like it to be removed from?\n");
                int n;
                scanf("%d", &n);
                DeleteInTheMiddle(head, n);
            }
        }
    }
}
void DeleteAtTheBeginning(struct node *head){
    struct node *toFree;
    toFree=head;
    head=head->next;
    free(toFree);
}
void DeleteInTheMiddle(struct node *head, int n){
    int i=0;
    struct node *ptr=head;
    struct node *toFree;
    while(i<n){
        ptr=ptr->next;
        i++;
    }
    ptr->pre->next=ptr->next;
    ptr->next->pre=ptr->pre;
    free(toFree);
}
void DeleteAtTheEnd(struct node *head){
    struct node *ptr=head;
    struct node *toFree;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    ptr->pre->next=NULL;
    free(toFree);
}
