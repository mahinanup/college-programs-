#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int info;
    struct Node *left, *right;
}
        node;

typedef struct Stack{
    node* arr[20];
    int top;
}
        stack;

node *Create(){
    int a;
    printf("Enter Data: ");
    scanf("%d", &a);
    node *nn = (node*)malloc(sizeof(node));
    nn->info=a;
    nn->left=NULL;
    nn->right=NULL;
    return nn;
}

node *Add(node *root){
    node *temp;
    int a;
    temp=(node*)malloc(sizeof(node));
    printf("Enter Data: ");
    scanf("%d", &a);
    temp->info=a;
    temp->left=NULL;
    temp->right=NULL;
    while(1){
        if(a<root->info){
            if(root->left==NULL){
                root->left=temp;
                break;
            }
            else{
                root=root->left;
            }
        }
        else{
            if(root->right==NULL){
                root->right=temp;
                break;
            }
            else{
                root=root->right;
            }
        }
    }
}

void Push(stack *s, node* a){
    s->top++;
    s->arr[s->top]=a;
}

void Pop(stack *s){
    s->top--;
}

void InOrder(node *root){
    stack s;
    s.top=-1;
    Push(&s, root);
    while(s.top!=-1){
        while(root->left!=NULL){
            root=root->left;
            Push(&s, root);
        }
        if(root->right==NULL){
            while(root->right==NULL && s.top!=-1){
printf("%d ", root->info);
                Pop(&s);
                root=s.arr[s.top];
            }
            if(s.top!=-1){
printf("%d ", root->info);
                Pop(&s);
                root=root->right;
                Push(&s, root);
            }
        }
        else{
printf("%d ", root->info);
            Pop(&s);
            root=root->right;
            Push(&s, root);
        }
    }
    printf("\n");
}

int minimum(node *root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root->info;
}

void main(){
    int i;
    node *root;
    root= Create();
    for(i=0; i<16; i++){
        Add(root);
    }
    InOrder(root);
    printf("Minimum value : ");
    printf("%d", minimum(root));
}
