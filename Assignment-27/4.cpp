#include <iostream>
using namespace std;

class Time
{
    private: 
        int hour, min, sec;
    public:
        Time()  {hour=min=sec=0;}
        friend int operator>>(istream &in, Time &T)
        {
            cout<<"---------------------"<<endl<<endl;

            cout<<"Enter Hours     : " ;  
            in>>T.hour;
            cout<<endl;
            
            cout<<"Enter Minutes   : " ;  
            in>>T.min;
            cout<<endl;

            cout<<"Enter Seconds   : " ;  
            in>>T.sec;
            cout<<endl;

            T.min = T.min + T.sec/60;
            T.sec %= 60;
            T.hour = T.hour + T.min/60;
            T.min %= 60;
            if(T.hour >= 25)
                return 1;
            else
                return 0;
        }

        friend ostream& operator<<(ostream &, Time&);

        void display()
        {
            cout<<hour;
        }

        int operator==(Time &T)
        {
            int t1 = hour*3600 + min*60 + 60;
            int t2 = T.hour*3600 + T.min*60 + 60;

            if (t1=t2)
                return 1;
            else    
                return 0;
        }
        ~Time() { }
        
};


ostream& operator<<(ostream &os, Time &T)
{
    os<<"Hours   : "<<T.hour<<endl;
    os<<"Minutes : "<<T.min<<endl;
    os<<"Seconds : "<<T.sec<<endl;

    return os;
}

int main()
{
    Time t1, t2;

    cout<<"First Time"<<endl;
    cin>>t1;
    cout<<"First Time"<<endl;
    cout<<t1;

    cout<<"Second Time"<<endl;
    cin>>t1;
    cout<<"Second Time"<<endl;
    cout<<t1;

    if(t1==t2)
        cout<<"Same Time! ";
    else
        cout<<"Different Time!";

    cout<<endl;

    return 0;
}