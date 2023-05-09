#include <stdio.h>

int maxsize = 5;
int stack[5];
int top = -1; // index of top data is always -1

/* Check if the stack is full
int isFull() {
   if (top == maxsize)
      return 1;
   else
      return 0;
}
Add elements into stack
void push(int data) {
   if (!isFull()) {
      top = top + 1;
      stack[top] = data;
       printf("stack [%d]= %d\n", top, stack[top]);
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}*/

// check whether the stack is full or not
int isFull(int top, int maxsize)
{
    (top == maxsize - 1) ? 1 : 0;
};
// main algo
int push(int data)
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
int main()
{
    // invoking push function
    push(45);
    push(45);
    push(45);
    push(45);
    push(45);
    push(45);
 
}
