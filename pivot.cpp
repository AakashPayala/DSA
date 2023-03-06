#include<bits/stdc++.h>
using namespace std;
int find_pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid;
    while(s<e){
         mid=(s+e)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }

    return arr[mid];


}
int main(){

    int arr[]={7,8,9,1,2,3,4,5,6};

    cout<<"pivot point is : "<<find_pivot(arr,9);

    return 0;
}