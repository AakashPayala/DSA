#include<iostream>
using namespace std;
int main(){
    int n,i,c,j,f=0;
    cout<<"enter the size of your array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array \n";
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                f=1;
                c=a[i];
                break;

            }
        }

    }
    if(f==1){
        cout<<"duplicate element="<<c;

    }
    else{
        cout<<"no duplicate elements found";
    }
    return 0;

}