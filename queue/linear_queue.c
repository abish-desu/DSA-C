// program implementation for linear queue operations

#include <stdio.h>
// defining queue with size 5 and default values for rear and front values
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

void deQueue(){
    front == -1
        ? printf("Queue is empty !!!\n")
        : printf("Dequeued %d\n",queue[front]),front++,
        (front>rear) ? front=rear=-1 : 0;
}
void display() {
    if (rear == -1) {
        printf("Queue is empty !!!\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
  //deQueue is not possible on empty queue
  deQueue();

  //enQueue 5 elements
  enQueue(71);
  enQueue(72);
  enQueue(73);
  enQueue(74);
  enQueue(75);

  // 6th element can't be added to because the queue is full
  enQueue(76);

  display();

  //deQueue ||  removes element entered first i.e. 71
  deQueue();
  deQueue();

  //Now we have just 4 elements
  display();

  return 0;
}
