#include <iostream>
using namespace std;

class Date
{
private:
    int date;

public:
    Date()
    {
        
    }

    void setD(int x)
    {
        date = x;
    }

    void showDate()
    {
        if (date <= 31)
        {
            cout << date << endl;
        }
        else
            cout << date << " is Invalid Date  !" << endl;
    }
};

int main()
{
    Date d1, d2;

    d1.setD(31);
    d2.setD(32);

    d1.showDate();
    d2.showDate();

    return 0;
}