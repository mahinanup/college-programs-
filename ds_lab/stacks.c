#include<stdio.h>
#define MAX 10//making the size of stack constant
int stack[MAX];
int top=-1;//globally declaring array and top
int push(int val);
void display();
int pop();
void main()
{
  int item,choice,x;
  //top = -1;
  while(1)//keeps running the below switch case in the entire program
  {
    printf("choose one of the option:-\n1.Display\n2.Insert(push)\n3.Delete(pop)\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: display();
              break;
      case 2: printf("enter the value to be pushed\n");
              scanf("%d",&item);
              push(item);
              printf("%d is added to the stack\n",item);
              break;
      case 3: x=pop();
              printf("the value that is poped is %d\n",x);
      default : printf("invalid option\n");
                break;
    }
  }//end of while
}



void display()
{
  int i;
  printf("the stack presently is\n");
  for(i=0;i<=top;i++)
  {
    printf("%d\t\n",stack[i]);
  }
}
int push(int val)
{
  if(top==MAX-1)
  {
    printf("Stack is full\n");
    return -1 ;
  }
  top++;
  stack[top]=val;

}
int pop()
{
  int y;
  if(top==-1)
  {
    printf("the stack is empty\n");
    return -1;
  }
  else
  {
    y=stack[top];
    top=top-1;
    return y;
  }
}
