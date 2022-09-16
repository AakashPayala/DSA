#include <bits/stdc++.h>
using namespace std;

class all{
public:
int  factorial(int a){
int f=1,i;
for(i=1;i<=a;i++){
    f=f*i;
}
return f;
}

int sum(int x, int y){
    return(x+y);
}
int sub(int x,int y){
    if(x>y)
    return (x-y);
    else
    return(y-x);
}
float div(int x,int y){
    
    return ((float)x/y);
}


};
int main(){
all ob;
int a,b;
cout<<"enter two nos.:"<<endl;
cin>>a>>b;
int fa,fb,s,su;
float d;
fa=ob.factorial(a);
fb=ob.factorial(b);
s=ob.sum(a,b);
su=ob.sub(a,b);
d=ob.div(a,b);
cout<<"FACTORIAL OF "<<a<<" IS : "<<fa<<endl;
cout<<"FACTORIAL OF "<<b<<" IS : "<<fb<<endl;
cout<<"SUM  OF "<<a<<" AND "<<b<<" IS : "<<s<<endl;
cout<<"DIFF..  OF "<<a<<" AND "<<b<<" IS : "<<su<<endl;
cout<<"DIVISION OF "<<a<<" / "<<b<<" IS : "<<d<<endl;
 return 0;
}