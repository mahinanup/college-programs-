#include <stdio.h>
#include <stdlib.h>


/* A binary tree node has info, pointer to left child
   and a pointer to right child */
typedef struct tnode
{
     struct tnode* left;

     int info;

     struct tnode* right;
} tnode;

void printPostorder(tnode* ptr);
void printPreorder(tnode* ptr);
void printInorder(tnode* ptr) ;

/* Helper function that allocates a new node with the
   given info and NULL left and right pointers. */
tnode* createNode(int info)
{
     tnode* new_Node = (tnode*) malloc(sizeof(tnode));
     new_Node->info = info;
     new_Node->left = NULL;
     new_Node->right = NULL;

     return(new_Node);
}

/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */


tnode* insert_nonrecur(tnode* rptr, int val)
{
	/* If the tree is empty, return a new node */
	if (rptr == NULL)
		rptr = createNode(val);
	else /* Otherwise, goto the node where it is to be inserted */
	{
		tnode *pp = NULL, *ptr=rptr ;

		while ( ptr )
		{
			pp=ptr;
			if (val< ptr->info)
				ptr=ptr->left;
			else
				ptr=ptr->right;
		}
		if (val < pp->info)
			pp->left=createNode(val);
		else
			pp->right=createNode(val);
	}

	return rptr;

}


tnode* insert_recur(tnode* rptr, int val)
{
	/* If the tree is empty, return a new node */
	if (rptr==NULL)
	{
		rptr=createNode(val);
		return rptr;
	}

	if (val < rptr->info)
		if (rptr->left!=NULL)
			insert_recur(rptr->left, val);
		else
			rptr->left=createNode(val);
 	else
	 	if (rptr->right!=NULL)
			insert_recur(rptr->right, val);
		else
			rptr->right=createNode(val);

	return rptr;
}

/* Driver program to test above functions*/
int main()
{
	tnode *root=NULL;

	root=insert_nonrecur(root,18);
	root=insert_nonrecur(root,21);
	root=insert_nonrecur(root,33);
	root=insert_nonrecur(root,567);
	root=insert_nonrecur(root,456);
	root=insert_nonrecur(root,-1);

	root= insert_recur(root,10);
	root= insert_recur(root,7);
	root= insert_recur(root,9);
	root= insert_recur(root,114);
	root= insert_recur(root,189);
	root= insert_recur(root,-5);
	root= insert_recur(root,18);

	printf("\nPreorder traversal of binary tree is \n");
	printPreorder(root);

	printf("\nInorder traversal of binary tree is \n");
	printInorder(root);

	printf("\nPostorder traversal of binary tree is \n");
	printPostorder(root);


	return 0;
}
/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void printPostorder(tnode* ptr)
{
     if (ptr == NULL)
        return;

     // first recur on left subtree
     printPostorder(ptr->left);

     // then recur on right subtree
     printPostorder(ptr->right);

     // now deal with the ptr
     printf("%d ", ptr->info);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(tnode* ptr)
{
     if (ptr == NULL)
          return;

     /* first recur on left child */
     printInorder(ptr->left);

     /* then print the info of ptr */
     printf("%d ", ptr->info);

     /* now recur on right child */
     printInorder(ptr->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(tnode* ptr)
{
     if (ptr == NULL)
          return;

     /* first print info of ptr */
     printf("%d ", ptr->info);

     /* then recur on left sutree */
     printPreorder(ptr->left);

     /* now recur on right subtree */
     printPreorder(ptr->right);
}
