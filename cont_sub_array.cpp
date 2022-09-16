#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s=0,x,c,b,f=0;
    cout<<"enter the size of the array :";
    cin>>n;
    int a[n];
    cout<<"enter your array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter your element :";
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            s=s+a[j];
            if(s==x)
            {
                c=i;
                b=j;
                f=1;
                break;
            }
        }
        s=0;
    }
    if(f==1)
    {
        cout<<c<<" "<<b;
    }
    else
    {
        cout<<"wrong input ";
    }
return 0;


}