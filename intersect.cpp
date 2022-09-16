   
   #include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
   
   
   
  node *getIntersectionNode(node *headA, node *headB) {
      ListNode *ptr1=headA;
      ListNode *ptr2=headB;
      while(ptr1!=NULL){
          while(ptr2!=NULL){
              if(ptr1->next==ptr2->next){
                  break;
              }
              ptr2=ptr2->next;
          }
          ptr2=headB;
          ptr2=ptr2->next;
      }
        return ptr1;
        
    }