# include <stdio.h>
#include <stdlib.h>
void main()
{
    struct li
{
    int data;
    struct li *next;
};
int n,i;
struct li *head,*nn,*temp;
head=NULL;
if(head=NULL)
{
    nn=(struct li*)malloc(sizeof(struct li));
    scanf("%d",&nn->data);
    head=nn;
}
else
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp->next=temp;
    }
    nn=(struct li*)malloc(sizeof(struct li));
    scanf("%d",&nn->data);
    temp=nn;
}


}
