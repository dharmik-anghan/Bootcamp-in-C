#include <iostream>
using namespace std;

class Rupee
{
    private:
        float r;
    public:
        Rupee() {}
        Rupee(float x)
        {
            r = x;
        }
        float getR()
        {
            return r;
        }
        
        void display()
        {
            cout<<r<<" Rs."<<endl;
        }
};

class Dollar
{
    private:
        float d; 
        static float one_dollor_price;
    public:
        Dollar() {}
        Dollar(Rupee r)
        {
            d = r.getR()/one_dollor_price;
        }
        int getD()
        {
            return d;
        }
        void display()
        {
            cout<<d<<" Dollar"<<endl;
        }

        operator Rupee()
        {
            return d*one_dollor_price;
        } 
};
float Dollar::one_dollor_price  = 82.21;
int main()

{
    Rupee r = 100;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    
    r = (Rupee)d;
    d.display();
    r.display();

    return 0;
}