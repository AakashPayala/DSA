#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll_no;
    int mathematics;
    int physics;
    int chemistry;
    int biology;
    int computer;
    int hindi;
    int history;
    int geography;
};

int main(){
    int n,i;
    cout<<" ENTER NUMBER OF STUDENTS IN YOUR CLASS :"<<endl;
    cin>>n;
    struct student a[n];
    for(i=0;i<n;i++){
        cout<<"ENTER NAME OF STUDENT "<<(i+1)<<" :"<<endl;
        cin>>a[i].name;
        cout<<"ENTER ROLL NO. :"<<endl;
        cin>>a[i].roll_no;
        cout<<"ENTER MARKS IN MATHEMATICS :"<<endl;
        cin>>a[i].mathematics;
        cout<<"ENTER MARKS IN PHYSICS :"<<endl;
        cin>>a[i].physics;
        cout<<"ENTER MARKS IN CHEMISTRY :"<<endl;
        cin>>a[i].chemistry;
        cout<<"ENTER MARKS IN BIOLOGY :"<<endl;
        cin>>a[i].biology;
        cout<<"ENTER MARKS IN COMPUTER :"<<endl;
        cin>>a[i].computer;
        cout<<"ENTER MARKS IN HINDI :"<<endl;
        cin>>a[i].hindi;
        cout<<"ENTER MARKS IN HISTORY :"<<endl;
        cin>>a[i].history;
        cout<<"ENTER MARKS IN GEOGRAPHY :"<<endl;
        cin>>a[i].geography;
        
     }
     cout<<"************************** STUDENT REPORT CARD **************************"<<endl;
     cout<<"NAME\tROLLNO.\tMATHEMATICS\tPHYSICS\tCHEMISTRY\tBIOLOGY\tCOMPUTER\tHINDI\tHISTORY\tGEOGRAPHY\tPRECENTAGE"<<endl;
     for(i=0;i<n;i++){
         cout<<a[i].name<<"\t";
         cout<<a[i].roll_no<<"\t";
         cout<<a[i].mathematics<<"\t";
         cout<<a[i].physics<<"\t";
         cout<<a[i].chemistry<<"\t";
         cout<<a[i].biology<<"\t";
         cout<<a[i].computer<<"\t";
         cout<<a[i].hindi<<"\t";
         cout<<a[i].history<<"\t";
         cout<<a[i].geography<<"\t";
         cout<<(a[i].mathematics+a[i].physics+a[i].chemistry+a[i].biology+a[i].computer+a[i].hindi+a[i].history+a[i].geography)/9<<"%";
         cout<<"\n";


     }
     return 0;


}