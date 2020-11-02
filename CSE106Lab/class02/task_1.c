#include <stdio.h>
#define SIZE 5

// Function section declare.
void enQueue(char value);
void deQueue();
void display();

// Initialize the value of our variables.
int front = 0, rear = 2;
char element[SIZE] = {'A','B','C'};
void main()
{
    enQueue('D');
    enQueue('E');
    deQueue();
    deQueue();
    display();
}
// Enqueue element section
void enQueue(char value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full! \n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        element[rear] = value;
    }
}
// Dequeue element section
void deQueue()
{
    if (front == -1)
    {
        printf("\nOops Queue is Empty! \n");
    }
    else
    {
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}
// Now display function showing the result.
void display()
{
    if (rear == -1)
    {
        printf("Oops Queue is Empty! \n");
    }
    else
    {
// Showing the size of the queue.
        printf("Now size of the queue is: %d\n", (rear - (front - 1)));
// Showing the elements in queue.
        printf("\n==================");
        printf("\nQueue element is: \n");
         printf("==================\n");
        for (int i = front; i <= rear; i++)
        {
            printf("Element is: %c and index is: %d \n", element[i],i);
        }
    }
}
