#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    int s=0;
    int e=n;
    int ans;
    int f=0;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if((mid*mid)>n){
            e=mid-1;
        }
        else if((mid*mid)<n){
            ans=mid;
            s=mid+1;
        }
        else if((mid*mid)==n){
            cout<<"ans is :"<<mid;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"ans is :"<<ans;
    }
    

    return 0;
}