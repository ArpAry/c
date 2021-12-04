
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int ar[MAX];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();

int main()
{
    int a;
    while(1)
    {

    printf("1 To Enter a Element in a Linear Queue\n");
    printf("2 To Delete a Element in a Linear Queue \n");
    printf("3 Display all Elements\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 :  enqueue(); break;
        case 2 :  dequeue(); break;
        case 3:  display(); break;
        case 4: exit(0);
        default: printf("Wrong Choice ");
    }
    }

    return 0;
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("Overflow Condition\n");
        return ;
    }
    else{
        if(front==-1)
        {
            rear=rear+1;
            front=front+1;
        }
        else{
            rear=rear+1;
        }
        int num;
        printf("Enter a Element\n");
        scanf("%d",&num);
        ar[rear]=num;
    }
}
void dequeue()
{
    if(front==rear==-1||front>rear){
        printf("Underflow condition\n");
    }
    else{
        //int x;
        //x=ar[front];
        int x;
            x=ar[front];
            ar[front]='\0';
        printf("%d Element deleted from array\n",ar[front]);
        if(front==0&&rear==0)
        { 

            front=rear=-1;
        }
        else
        {
            front=front+1;

        }

    }
}

void display()
{
    if(front==rear==-1)
    {
        printf("Array is Empty\n");

    }
    else
    {
        int i;
        printf("Numbers are\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",ar[i]);
        }
    }
}