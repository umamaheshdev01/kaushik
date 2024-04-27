#include <bits/stdc++.h>
using namespace std;

class TollBooth{
    private:
    unsigned int cars;
    double cash;

    public:
    void intialize(){cars=0;cash=0;}

    void payingCar(){cars++;cash+=0.5;}

    void noPayCar(){cars++;}

    void display(){
        cout<<"Total cars : "<<cars<<endl;
        cout<<"Total cash : "<<cash<<endl;

    }
};


int main()
{
    TollBooth t;
    t.intialize();

    while(1)
    {
        int x;
        cin>>x;

        if(x==1){t.payingCar();}
        else if(x==2){t.noPayCar();}
        else{t.display();break;}
    }
}