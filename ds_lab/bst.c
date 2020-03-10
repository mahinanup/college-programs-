#include<stdio.h>
#include<stdlib.h>
struct bstnode
{
  int data;
  struct bstnode *left;
  struct bstnode *right;
};
struct bstnode *root = NULL;

void insert(int num)
{
  struct bstnode *new_node;
  new_node =(struct bstnode*)malloc(sizeof(struct bstnode));
  new_node->data=num;
  new_node->left = NULL;
  new_node->right = NULL;
  struct bstnode *ptr;
  ptr = root;
  if(root == NULL)
  {
    root = new_node;
  }
  else
  {
    struct bstnode* curr;
    curr = root;
    while(curr)
    {
      ptr = curr;
      if(new_node->data >= curr->data)
      {
        curr = curr->right;
      }
      else
      {
        curr = curr->left;
      }
    }
    if(new_node->data >= ptr->data)
    {
      ptr->right = new_node;
    }
    else
    {
      ptr->left= new_node;
    }
  }
}
void printPostorder(struct bstnode* ptr)
{
     if (ptr == NULL)
        return;

     // first recur on left subtre
     printPostorder(ptr->left);

     // then recur on right subtree
     printPostorder(ptr->right);

     // now deal with the ptr
     printf("%d ", ptr->data);
}

void main()
{
  insert(4);
  insert(5);
  insert(7);
  insert(9);
  printPostorder(root);
}
