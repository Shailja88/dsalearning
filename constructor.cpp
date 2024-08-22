#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_num;
    int balance;
    // default constructor
   
    public:
    //  customer(){
    //     cout<<"hello world";
    // }
    customer(){
        name="shailja";
        acc_num=234;
        balance=434234234;
    }
    //parameterised constructor
    // customer(string name,int acc_num,int balance){
    //     this->name=name;
    //     this->acc_num=acc_num;
    //     this->balance=balance;
    // }
    inline customer(string a,int b,int c):name(a),acc_num(b),balance(c){
        
    }
    customer(string name,int acc_num){
        this->name=name;
        this->acc_num=acc_num;
        balance=23234;
    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<endl;
    }
};
int main(){
     customer obj;
     obj.display();
     customer obj2("radha",34,032423412);
     obj2.display();
     
     customer obj3("genie",33);
     obj3.display();
     
     
}
