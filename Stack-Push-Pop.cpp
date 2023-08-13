#include<stdio.h>

int top = -1;
int size =10;
int mystack[10];

int isEmpty ()
{
    if (top==-1)
    {
        printf("\nStack is empty\n");
        return 1;
    }

    else
    {
        printf("\nStack is empty\n");
        return 0;
    }

}


int isFull()
{
    if (top == size-1)
    {
        printf("\nStack is Full\n");
        return 1;
    }

    else
    {
        printf("\nStack is not Full\n");
        return 0;
    }
}


void push (int x)
{
    if(!isFull())
    {
        printf ("\nPushing value %d\n", x);
        top++;
        mystack[top] = x;
    }
}

int pop ()
{
    if (!isEmpty())
    {
        int x = mystack [top];
        mystack[top] = 0;
        top--;
        return x;
    }
}

void printarr()
{
    int i;
    if (isEmpty())
    {
        printf("\nThe stack is empty\n");
    }
    printf("\nPrinting Value of Mystacks\n");
    for (i = 0; i<=top; i++)
    {
        printf("%d\n", mystack[i]);
    }
}


int main ()
{
    int X;
    push (10);
    push (20);
    push (30);
    printarr ();
    X = pop ();
    printf ("Popped value: %d", X);

    printarr ();
}
