#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nextPtr;
};
void insert_begining( int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->nextPtr=NULL;
    head=temp;

}



void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->nextPtr;
    }
}
struct node *head;
int main(){
int n, i;
    int input;
    struct node *newNode;
    struct node *tempNode;
    head = (struct node *)malloc(sizeof(struct node) );
    printf("enter no.of elements :");
    scanf("%d",&n);
    printf("enter %d elemnts ", n);
    scanf("%d", &input);
    head->data = input;
    head->nextPtr = NULL;
    tempNode = head;
    for (i = 0; i < n - 1; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &input);
        newNode->data = input;
        newNode->nextPtr = NULL;
        tempNode->nextPtr = newNode;
        tempNode = tempNode->nextPtr;
    }
    display(startNode);
    return 0;
}

