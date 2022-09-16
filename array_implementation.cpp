#include<bits/stdc++.h>
using namespace std;
int pop(int t){
    return (t-1);

}
int main(){
    cout<<"enter size of stack:\n";
    int n;
    cin>>n;
    cout<<"enter "<<n<<" elements :\n";
    int stack[n];
    int top=0;
    while(top<n){
       cin>> stack[top];
       top++;
    }
    cout<<"elements of your stack :\n";
   top=top-1;

   while(top>=0){
       cout<<stack[top]<<"  ";
       top--;
       
   }

   cout<<"\nelements of stack after pop:\n";
   top=n-1;
   top=pop(top);
    while(top>=0){
       cout<<stack[top]<<"  ";
       top--;
       
   }

    return 0;

}