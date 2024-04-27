#include <iostream>
using namespace std;

class Distance{

    private:
    int feet;
    float inches;

    public:
    void getDist()
    {
        cout<<feet<<" Feet "<<inches<<" inches"<<endl;
    }
    
    void putDist(int f,float i)
    {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance other)
    {
        Distance result;
        result.feet = feet + other.feet;

        float total =  inches+other.inches;
        int extra_feet = (int)total/12;
        float left_inches =  total - extra_feet*12;

        result.feet+=extra_feet;
        result.inches = left_inches;

        return result;
    }


    void divide(float x)
    {
        Distance result;
        float f1 = (float)feet/x;
        float i1 = inches/x;

        float f1_left = f1 - (int)f1;
        i1+=f1_left*12;

        int k = int(f1) + (int)(i1/12);
        float p = i1 - (int)(i1/12);

        result.putDist(k,p);
        result.getDist();

    }

    
};


int main()
{
    Distance dummy;
    dummy.putDist(0,0);
   
     
    int n=3;
    Distance d[n];
    d[0].putDist(1,2);
    d[1].putDist(6,5.1);
    d[2].putDist(4,5.6);

    for(int i=0;i<n;i++)
    {
        dummy =  dummy+d[i];
    }
    
    dummy.divide(n);
}
