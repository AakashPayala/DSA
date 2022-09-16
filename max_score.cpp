#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
    cout <<"enter no. of test cases:\n";
	cin>>t;
	while(t-->0){
        cout<<"enter number od students:\n";
	    int n;
	    cin>>n;
        cout<<"enter score of "<<n<<" students :\n";
	    priority_queue<pair<int,int>> pq;
	    int pos=1;
	    while(n--){
	        int value;
	        cin>>value;
	        pq.push({value,pos});
	        pos++;
	    }
	    while(!pq.empty()){
	        cout<<pq.top().second<<" ";
	        pq.pop();
	    }
	    cout<<endl;
	}
	return 0;
}