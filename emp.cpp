#include <iostream>
using namespace std;

class Employee{
    private:
    string name;
    long number;

    public:
    void getData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Number :"<<number<<endl;
    }

    void putData(string x,long n){
        name = x;
        number = n;
    }
};

int main()
{
    int n;
    cout<<"No of entries :";
    cin>>n;

    Employee e[n];

    for(int i =1;i<=n;i++){
        cout<<"Entry "<<i<<endl;
        string x;
        long k;
        cout<<"Name :";
        cin>>x;
        cout<<"Num :";
        cin>>k;

        e[i-1].putData(x,k);
    }

    cout<<"Your entries"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Entry "<<i<<endl;
        e[i-1].getData();
        cout<<endl;
        
    }
}