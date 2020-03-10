#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;
 

void Push(int);
int Pop();
 
int main(){
    char exp[20];
    char *e;
    int n1,n2,n3,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0'){
        if(isdigit(*e)){
            num = *e - 48;
            Push(num);
        }
        else{
            n1 = Pop();
            n2 = Pop();
            switch(*e){
                case '+':{
                          n3 = n1 + n2;
                          break;}
                case '-':{
                           n3 = n2 - n1;
                           break;}
                case '*':{
                           n3 = n1 * n2;
                           break;}
                case '/':{
                           n3 = n2 / n1;
                           break;}
            }
            Push(n3);
        }
        e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,Pop());
    return 0;
}


void Push(int x){
        stack[++top] = x;
}
int Pop(){
        return stack[top--];
}