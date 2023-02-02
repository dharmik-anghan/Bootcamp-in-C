#include <iostream>
using namespace std;

class Time
{
    private:
        int seconds;
    public:
        Time() {}
        Time(int x)
        {
            seconds = x;
        }
        int getMin()
        {
            return seconds;
        }
        void display()
        {
            cout<<seconds<<" seconds"<<endl;
        }
        
        

};


int main()

{
    int duration;
    cout<<"Enter time duration in minutes\n";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}