#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string\n";
    cin>>s;
    int c=0,vov=0;
    char ch[]={'a','e','i','o','u'};
    for(int j=0;j<sizeof(ch);j++){
    for(int i=0;i<s.length();i++){
        if(s[i]==ch[j])
        {
            c++;
        }
    }
    if(c>0)
    vov++;
    c=0;
    }
    cout<<vov;

    return 0;

}