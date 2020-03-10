#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack{
    int top;
    int size;
    int* array;
};
struct Stack* CreateAStack(int size){
    struct Stack* temp = (struct Stack*) malloc(sizeof(struct Stack));
    if (temp == NULL) {
        return NULL;
    }
    temp->top = -1;
    temp->size = size;
    temp->array = (int*) malloc(temp->size * sizeof(int));
    if (temp->array==NULL) {
        return NULL;
    }
    return temp;
}

int isEmpty(struct Stack* stack){
    return stack->top == -1 ;
}
char Peek(struct Stack* stack){
    int value=stack->array[stack->top];
    return (value);
}
char Pop(struct Stack* stack){
    if (!isEmpty(stack)) {
        return stack->array[stack->top--];
    }
    return '$';
}
void push(struct Stack* stack, char op){
    stack->array[++stack->top] = op;
}
int isOperand(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int Precedence(char ch){
    switch (ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}
int InfixToPostfix(char* expression){
    int i, k;
    struct Stack* stack = CreateAStack(strlen(expression));
    if(!stack)
        return -1 ;
    for ( i = 0, k = -1; expression[i]; ++i){
        if (isOperand(expression[i]))
            expression[++k] = expression[i];
        else if (expression[i] == '(')
            push(stack, expression[i]);
        else
            if (expression[i] == ')'){
            while (!isEmpty(stack) && Peek(stack) != '(')
                expression[++k] = Pop(stack);
            if (!isEmpty(stack) && Peek(stack) != '(')
                return -1;
            else
                Pop(stack);
        }
        else{
            while (!isEmpty(stack) && Precedence(expression[i]) <= Precedence(Peek(stack)))
                expression[++k] = Pop(stack);
            push(stack, expression[i]);
        }

    }
    while (!isEmpty(stack)) {
        expression[++k] = Pop(stack);
    }
    expression[++k] = '\0';
    printf("%s", expression);
}

void main(){
    printf("Enter a string");
    char Infix[100];
    scanf("%s",Infix);
    InfixToPostfix(Infix);
}
