#include<iostream>
#include<stack>
using namespace std;
stack<int> st;

 /*
    INBUILT FUNCTIONS OF STACK :
    1: push(element)
    2: pop()
    3: empty()
    4: top()
    5: size()
    */
int main()
{
      
    int ch;
    cout<<"enter 1 to push element\n";
    cout<<"enter 2 to pop element\n";
    cout<<"enter 3 to display size of stack\n";
    cout<<"enter 4 to display peek element\n";
    cout<<"enter 0 to terminate\n";
    cout<<"ENTER YOUR CHOICE:\n";
    cin>>ch;
    while(ch!=0){
    switch(ch){
        case 1:
        {
            int x;
            cout<<"enter element to be pushed: ";
            cin>>x;
            cout<<"\n";
            st.push(x);
            break;
        }
        case 2:
        {
            cout<<"element poped : "<<st.top();
            st.pop();
            cout<<"\n";
            break;

        }
        case 3:
        {
            cout<<"current size of the stack :"<<st.size();
            cout<<"\n";
            break;
        }
        case 4:
        {
            cout<<"top element of stack :"<<st.top()<<endl;
            break;

        }
        defaut:
        {
            cout<<"wrong choce\n";
            break;
        }
         
            }
    cout<<"enter 1 to push element\n";
    cout<<"enter 2 to pop element\n";
    cout<<"enter 3 to display size of stack\n";
    cout<<"enter 4 to display peek element\n";
    cout<<"enter 0 to terminate\n";
    cout<<"ENTER YOUR CHOICE:\n";

            cin>>ch;
   }

    return 0;
}
