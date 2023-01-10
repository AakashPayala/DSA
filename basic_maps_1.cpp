#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> map1;

    map1[1] = "aakash";
    map1[2] = "payala";
    map1[3] = "lakshy";

    map<int, string>::iterator it;
    for (it = map1.begin(); it != map1.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    }

    map<string, int> map2;

    map2.insert({{"aakash", 1}, {"payala", 2}, {"lakshy", 3}});

    map<string, int>::iterator it2;
    for (it2 = map2.begin(); it2 != map2.end(); it2++)
    {
        cout << (*it2).first << " " << (*it2).second << "\n";
    }

    cout << "===========================================\n";
    cout << "size : " << map1.size() << endl;
    cout << "is empty : " << map2.empty() << endl;
    cout << "max size : " << map1.max_size() << endl;



    ///////////// sample 

    map<char,int> m3;
    string s="aakash";
    for(int i=0;i<s.length();i++){
        m3[s[i]]=s[i];
    }

    map<char,int>:: iterator it3;
    for(it3=m3.begin();it3!=m3.end();it3++){
        cout<<(*it3).first<<" -> "<<(*it3).second<<endl;
    }

/////////////sample 2
cout<<"----------------------------------------------------\n";
    map<char,int> m4;
    string s2="aakash";
    for(int i=0;i<s2.length();i++){
        m4[s2[i]]+=s2[i];
    }

    map<char,int>:: iterator it4;
    for(it4=m4.begin();it4!=m4.end();it4++){
        cout<<(*it4).first<<" -> "<<(*it4).second<<endl;
    }



    return 0;
}

