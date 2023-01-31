#include <iostream>
using namespace std;

class Marks
{
    private:
        int marks;
    public:
        Marks(int x)
        {
            marks=x;
        }
        void display()
        {
            cout<<marks<<endl;  
        }
        Marks *operator->()
        {
            return this;
        }
};

int main()
{
    Marks m(34);

    m.display();
    m->display();

    return 0; 
}