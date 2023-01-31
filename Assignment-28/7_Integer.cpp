#include <iostream>
using namespace std;

class Integer
{
    private:
        int i;
    public:
        Integer(int i):i(i)
        {

        }
        int operator!()
        {
            return -i;
        }
};

int main()
{
    Integer x = 10;
    cout<<!x;
    
    return 0;
}