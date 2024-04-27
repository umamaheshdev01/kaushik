#include <iostream>
using namespace std;

class Student{

    public:
    int rollno;
    string name;
    string address;
    string city;
    int pin;
    int sem;
    int rank;
    string branch;

    public:
    void putdata(int r,string n,string a,string c,int p,int s,int ra,string b)
    {
        rollno=r;
        name=n;
        address=a;
        city=c;
        pin=p;
        sem=s;
        rank=ra;
        branch=b;
    }

    void getdata()
    {
        cout<<"Roll number is "<<rollno<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Address is "<<address<<endl;
        cout<<"City is "<<city<<endl;
        cout<<"Pin is "<<pin<<endl;
        cout<<"Sem is "<<sem<<endl;
        cout<<"Rank is "<<rank<<endl;
        cout<<"Branch is "<<branch<<endl<<endl;
    }

};

class DB{

    public:
    int count = 0;
    Student st[500];

    void add(int r,string n,string a,string c,int p,int s,int ra,string b){
        st[count].putdata(r,n,a,c,p,s,ra,b);
        count++;
    }

    void classify(string branch,int sem)
    {
        for(int i=0;i<count;i++)
        {
            if(st[i].branch == branch && st[i].sem==sem)
            {
                st[i].getdata();
            }
        }
    }




};


int main()
{
    DB db;
    db.add(1,"Uma","Hyd","City",500,2,100,"IT");
    db.add(2,"Uma1","Hyd","City",500,2,200,"IT");
    db.add(3,"Uma2","Hyd","City",500,3,300,"CSE");
    db.add(4,"Uma3","Hyd","City",500,2,400,"CSE");
    db.add(5,"Uma4","Hyd","City",500,1,500,"Mech");

    db.classify("CSE",3);
}