// program implementation for linear queue operations

#include <stdio.h>
int queue[5], rear = -1, front = -1, size_of_q = 5;

void enQueue(int data)
{
    rear == size_of_q - 1
        ? printf("Queue is full !!!\n")
        : (front == -1
               ? (front = 0)
               : 0,
           queue[++rear] = data,
           printf("Inserted %d\n", data));
}

void deQueue()
{
    front == -1
        ? printf("Queue is empty !!!\n")
        : printf("Dequeued %d\n", queue[front]),
        front++,
        (front > rear) ? front = rear = -1 : 0;
}
void display()
{
    if (rear == -1)
    {
        printf("Queue is empty !!!\n");
    }
    else
    {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    deQueue();
    enQueue(71);
    enQueue(72);
    enQueue(73);
    enQueue(74);
    enQueue(75);
    enQueue(76);
    display();
    deQueue();
    deQueue();
    display();
    return 0;
}






