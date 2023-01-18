#include <iostream>
using namespace std;

class Bill
{
    private:
        float unit, bill, x = 1.5, y = 2, z = 3;
        int ac;
    public:
        Bill()
        {
            
        }
        void get()
        {
            int a;
            float u;
            cout<<"Enter A/C and Units: "<<endl;
            cin>>a>>u;

            ac = a;
            unit = u;
        }
        int getAC()
        {
            return ac;
        }
        int getUnit()
        {
            return unit;
        }
        float getBill()
        {
            return bill;
        }
        void calculateaBill()
        {
            float temp=0;

            if(unit <= 100)
                temp = x*unit;
            else if(unit > 100 && unit <=200)
                temp = x*100 + y*(unit - 100);
            else
                temp = x*100 + y*100 + z*(unit - 200);
                
            bill = temp;
        }
};

int main()
{
    Bill b1;

    b1.get();
    b1.calculateaBill();

    cout<<b1.getBill();

    return 0;
}