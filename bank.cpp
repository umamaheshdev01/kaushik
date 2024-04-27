#include <bits/stdc++.h>
using namespace std;

class BankHolder{
    private:
    string name;
    int acc_no;
    string type;
    int balance;

    public:
    void intialize(string a,int acc,string t,int b){
        name = a;
        acc_no = acc;
        type = t;
        balance = b;
    }

    void deposit(int x)
    {
        balance+=x;
        cout<<"You have deposited "<<x<<" Your balance is "<<balance<<endl;
    }

    void withdraw()
    {
        cout<<"Your balance is "<<balance<<endl<<"How much you want to withdraw:";
        int x;
        cin>>x;
        balance-=x;
        cout<<"You have withdrawn "<<x<<" Your balance is "<<balance<<endl; //condition
    }

    void display()
    {
        cout<<"Account holder name :"<<name<<endl;
        cout<<"Balance :"<<balance<<endl;
    }



};


int main()
{
    BankHolder k;
    k.intialize("Kaushik",123456,"Savings",2000);
    k.display();
    k.deposit(1000);
    k.withdraw();
}