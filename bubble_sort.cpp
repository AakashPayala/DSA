#include <iostream>
using namespace std;
int main()
{
    int n,i,j,t;
    cout<<"enter the size of the array :\n";
    cin>>n;
    int a[n];
    cout<<" enter your array :\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"sorted array : \n ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
   return 0;
}
