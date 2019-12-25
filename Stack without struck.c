#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[];
int top=-1;

void push(){
    int val;
    if(top==max){
        printf("Stack is full\n");
    }
    else{
            printf("Push a number:");scanf("%d",&val);
            top++;
            stack[top]=val;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        printf("Last push element is:%d\n",stack[top]);
    }
}

void pop(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        printf("Pop element is:%d\n",stack[top]);
        top--;
    }
}

void display(){
    int j;
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        printf("Your stack is : ");
        for(j=top;j>=0;j--){
            printf("\n%d",stack[j]);
        }
        printf("\n");
    }
}

void main(){
    int i;
    while(1){
        printf("\n1.PUSH\n2.PEEK\n3.POP\n4.DISPLAY\n5.EXIT\n");
        scanf("%d",&i);
        switch(i){
        case 1:
            push();
            break;
        case 2:
            peek();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("Try again...\n");
        }
    }
}
