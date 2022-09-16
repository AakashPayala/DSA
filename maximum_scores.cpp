#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<< "ENTER NO. OF STUDENTS:\n";
    int n;
    cin>>n;
    cout<<"ENTER "<<n<<" ELEMENTS \n";
    int a[n];
    for(int i=0;i,n;i++){
        cin>>a[i];
    }
    int h=a[0];
    int pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>h){
                h=a[i];
                pos=i+1;
            }
        }
        cout<<pos<<" ";
        a[pos-1]=-1;
        h=a[0];

    }
    return 0;
}