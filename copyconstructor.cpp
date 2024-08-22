#include<bits/stdc++.h>

using namespace std;
class customer{
    private:
    string name;
    int account_number,balance;
    public:
     customer(string name,int account_number,int balance){
         this->name=name;
         this->account_number=account_number;
         this->balance=balance;
     }
     customer(customer &b){
         name=b.name;
         account_number=b.account_number;
         balance=b.balance;
     }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    
};
int main(){
    customer a1("Shailja",1,10000000);
    a1.display();
    customer a2(a1);
    a2.display();
    customer a3=a1;
    a3.display();
    
}
