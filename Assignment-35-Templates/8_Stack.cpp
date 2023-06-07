#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack
{
    private:
        T array[100];
        int top;
    public:
        Stack()
        {
            top = -1;
        }
        void PUSH(T i)
        {
            array[++top] = i;
        }
        T POP()
        {
            return array[top--];
        }
        void Display()
        {
            for(int i = 0; i <= top; i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
        }
        ~Stack()
        {
            top = -1;
        }
};

int main()
{
    Stack<int> s;
    s.PUSH(9);
    s.PUSH(10);
    s.PUSH(11);
    cout<<s.POP()<<endl;

    s.Display();

    Stack<string> s1;
    s1.PUSH("Dharmik ");
    s1.PUSH("Anaghan ");
    cout<<s1.POP()<<endl;
    s1.Display();







    return 0;
}