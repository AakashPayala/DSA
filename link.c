#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nextPtr;
};
struct node *startNode;


void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->nextPtr;
    }
}

int main()
{
    int n, i;
    int input;
    struct node *newNode;
    struct node *tempNode;
    startNode = (struct node *)malloc(sizeof(struct node) );
    printf("enter no.of elements :");
    scanf("%d",&n);
    printf("enter %d elemnts ", n);
    scanf("%d", &input);
    startNode->data = input;
    startNode->nextPtr = NULL;
    tempNode = startNode;
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
