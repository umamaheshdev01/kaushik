#include <bits/stdc++.h>
using namespace std;

class Int{
 
    public:
    int x;

    void initialize(){x=0;}
    void initialize(int k){x=k;}

    Int operator+(Int other){
        Int ans;
        ans.x = x + other.x;
        return ans;
    }

};

int main()
{
    Int a,b,c;
    a.initialize(10);
    b.initialize(2);
    c = a+b;
    cout<<c.x<<endl;
}