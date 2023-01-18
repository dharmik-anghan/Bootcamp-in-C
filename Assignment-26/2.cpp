#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;
    public: 
        void setTime(int h, int m, int s)
        {
            hour = h;
            min = m;
            sec = s;
        }
        void showTime()
        {
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
        void normalize()
        {
            min = min + sec/60;
            sec = sec%60;
            hour = hour + min/60;
            min = min%60;
        }

        Time add(Time T)
        {
            Time temp;

            temp.hour = hour + T.hour;
            temp.min = min + T.min;
            temp.sec = sec + T.sec;

            temp.normalize();
            
            return temp;
        }

        
};

int main()
{
    Time t1, t2, t3;

    t1.setTime(3, 60, 120);
    t2.setTime(7, 65, 00);
    t3 = t1.add(t2);

    t1.normalize();
    t2.normalize();

    t1.showTime();
    t2.showTime();
    t3.showTime();

    return 0;
}