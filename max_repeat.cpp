// s= the cat eats the cat with the cat food.

#include<bits/stdc++.h>
using namespace std;
int main(){

    map<string, int> m;
    string s;
    cout<<"enter :\n";
    getline(cin,s);
    s=s+" ";
    string w="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            w=w+s[i];
        }
        else{
            m[w]=m[w]+1;
            w="";
        }
    }
    int max=0;
    map<string, int>::iterator it2;
    for (it2 = m.begin(); it2 != m.end(); it2++)
    {
        // cout << (*it2).first << " " << (*it2).second << "\n";
        
        if((*it2).second>max){
            max=(*it2).second;
            // cout<<((*it2).first)<<" ";
        }
    }
     for (it2 = m.begin(); it2 != m.end(); it2++)
    {
        // cout << (*it2).first << " " << (*it2).second << "\n";
        
        if((*it2).second==max){
            // max=(*it2).second;
            cout<<((*it2).first)<<" ";
        }
    }



    return 0;
}