#include <iostream>
using namespace std;

class Integer
{
    private:
        int i;
        float y;
    public:
        Integer(int i):i(i)
        {

        }
        operator int()
        {
            return i;
        }
        
};

int main()
{
    Integer x = 10;
    int a;

    a = (int)x;

    cout<<a<<" "<<sizeof(a)<<" "<<sizeof(Integer);
    
    return 0;
}