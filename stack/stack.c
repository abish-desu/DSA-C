#include <stdio.h>

int maxsize = 5;
int stack[5];
int top = -1; // index of top data is always -1
int data;

// check whether the stack is full or not
int isFull()
{
   return  (top == maxsize - 1) ? 1 : 0;
};
// check whether the stack is empty or not
int isEmpty()
{
   return  (top == -1) ? 1 : 0;
}
// push data
void push(int data)
{
    if (isFull(top, maxsize))
    {
        printf("stack is full.\n");
    }
    else
    {
        top = top + 1;
        stack[top] = data;
        printf("stack [%d]= %d\n", top, stack[top]);
        printf("Added successfully\n");
    }
}
// pop data
int pop()
{

    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        data = stack[top];
        top -= 1;
        return data;
    }
}

// display the data on stack
int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("stack[%d] = %d\n", i, stack[i]);
    }
}
int main()
{
    // invoking push function
    push(69);
    push(81);
    push(82);
    push(8);
    push(70);
    push(69);
    // display stack
    display();
    // invoking pop function
    pop(); // pops the top most data
// display stack after pop
    printf(" %d is popped out\n", data);
    display();
}
