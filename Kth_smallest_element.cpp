#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    cout<<"enter size of the array :\n";
    cin>>n;
    int a[n];
    cout<<"enter your array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value of k \n";
    cin>>k;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
cout<<"the "<<k<<"th smallest element is :"<<a[k-1];

return 0;
}