#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min;
    public:
        Time() {}
        Time(int x, int y)
        {
            hour = x;
            min = y;
        }
        int getMin()
        {
            return min;
        }
        void display()
        {
            cout<<hour<<"h "<<min<<"m"<<endl;
        }
        
        

};
class Minute
{
    private:
        int minute;
    public:
        Minute() {minute = 0;}
        Minute(Time t)
        {
            minute = t.getMin();
        }
        void display()
        {
            cout<<minute<<"m"<<endl;
        }
};

int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
    
    return 0;
}