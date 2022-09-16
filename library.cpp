#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class SRMIST_Library{
   
    private:
    int book_no;
    char book_title[20];
    float price;
    float Total;
    int testNum;
    
    public:
    
    void input(){
        cout<<"enter book no : \n";
        cin>>book_no;
        cout<<"enter book title :\n";
        cin>>book_title;
        cout<<"enter price of book :\n";
        cin>>price;
    }
    void purchase(){
        int no_of_books;
        cout<<"input no. of copies to be purchased :\n";
        cin>>no_of_books;
        tot_cost(no_of_books);
    }
    void tot_cost(int n){
        Total=n*price;
        cout<<"total cost of the books is : \n"<<Total<<endl;;
        cout<<"book no:\n"<<book_no<<endl;
        cout<< "book title \n"<<book_title<<endl;
        cout<<"price per book\n"<<price<<endl;
    }


};
int main(){
SRMIST_Library ob1,ob2;

    ob1.input();
    ob1.purchase();

    return 0;
}