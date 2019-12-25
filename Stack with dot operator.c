#include <stdio.h>
#define MAXSIZE 10

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int  pop(void);
void display(void);

void main ()
{
    int choice;
    int option = 1;
    s.top = -1;

    printf ("STACK OPERATION\n");
    while (1)
    {
        printf("\n1. PUSH\n2. PEEK\n3. POP\n4. DISPLAY\n5. EXIT\n");
        printf ("Enter your choice : ");
        scanf    ("%d", &choice);
        switch (choice)
        {
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
            return;
        }


    }
}
/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed : ");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
/*  Function to display the status of the stack */
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\nThe status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("\t\t%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

int peek ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("peeked element is = %d\n", s.stk[s.top]);
    }
    return(num);
}
