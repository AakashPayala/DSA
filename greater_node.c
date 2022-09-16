#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head;
void display(){
    struct node* ptr;
    ptr=head;
    while (ptr->next!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    
}
int count(){
    int c=0;
    struct node* ptr=head;
    while (ptr->next!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    return c;
    
}
void delete(int num){
    struct node *ptr,*previous;
    ptr=head;
    if(ptr->data==num)
    {
        head=head->next;
        ptr->next=NULL;
        free (ptr);

    }
    else{
    
    while(ptr->data!=num){
        previous=ptr;
      ptr=ptr->next;
    }
    previous->next=ptr->next;
    ptr->next=NULL;
    free(ptr);
    }
}
int main(){
    struct node*temp,*ptr;
    int val;
    printf("ENTER ELEMENTS IN A LIST ENTER -1 TO STOP :\n");
    do{
        scanf("%d",&val);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->next=NULL;
     if(head==NULL){
         head=temp;
     }
     else
     {
         ptr=head;
         while (ptr->next!=NULL)
         {
             ptr=ptr->next;
         }
         ptr->next=temp;

         ptr=head;
         while (ptr->next!=NULL)
         {
             if(ptr->data==ptr->next->data){
                 delete(ptr->next->data);
                 
             }
             ptr=ptr->next;
         }
         

     }

        
    }while(val!=-1);
    
    
   
    
   
    return 0;
   

}