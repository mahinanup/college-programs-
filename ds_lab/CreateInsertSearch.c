#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *left, *right;
};
struct Node* CreateANode(int value){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->info = value;
    temp->left = temp->right = NULL;
    return temp;
}
struct Node* Insert(struct Node* node, int value){
    if(node == NULL){
        return CreateANode(value);
    }
    if(value < node->info) {
        node->left = Insert(node->left, value);
    }
    else if (value > node->info)
        node->right = Insert(node->right, value);
    return node;
}
int Search(struct Node* root, int value){
    if(root==NULL){
        printf("Tree is empty...\n");
        return(0);
    }
    if(root->info==value){
        return 1;
    }
    else{
        if(root->info>value){
            return Search(root->left, value);
        }
        else{
            return Search(root->right, value);
        }
    }
}
void main(){
    struct Node* root = NULL;
    int ch;
    do{
        printf("Enter a node value?\n");
        printf("Yes=1, No=2\n");
        scanf("%d",&ch);
        switch(ch){
            case 1 :printf("Enter the value.\n");
                int value;
                scanf("%d",&value);
                root=Insert(root, value);
                break;
            case 2 :break;
            default:printf("Unexpected value...");
                break;
        }
    }while(ch!=2);
    printf("Enter a value to look for.\n");
    int Value;
    scanf("%d",&Value);
    int flag=Search(root, Value);
    if(flag==0){
        printf("Value not found.\n");
    }
    else{
        printf("Value is present.\n");
    }
}
