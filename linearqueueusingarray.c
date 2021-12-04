#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int ar[MAX];
int front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
    int a;
    while(1)
    {

    printf("1 To Enter a Element in a Linear Queue");
    printf("2 To Delete a Element in a Linear Queue ");
    printf("3 Display all Elements");
    scanf("%d",&a);
    switch(a)
    {
        case 1 : void Enqueue(); break;
        case2: void DequeueO(); break;
        case 3: void Display(); break;
        case 4: exit(0);
        default: printf("Wrong Choice ");
    }
    }

}
void enqueue()
{
    if(rear=MAX-1)
    {
        printf("Overflow Condition");
    }
    else{
        if(rear==front==-1)
        {
            rear=rear+1;
            front=front+1;
        }
        else{
            rear=rear+1;
        }
        int num;
        printf("Enter a Element");
        scanf("%d",&num);
        ar[rear]=num;
    }
}
void dequeue()
{
    if()
}