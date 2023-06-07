#include <iostream>
using namespace std;

template <class T>
class Hash
{
    private:
        int array[9];
    public:
        void Push(T num)
        {
            if(num>9)
            {
                array[num%10] = num;
            }
            else
            {
                array[num] = num;
            }
        }
        void search(T num)
        {
            if(num>9)
            {
                if(array[num%10] == num)
                    cout<<array[num%10]<<" is found"<<endl;
                else
                    cout<<num<<" not found"<<endl;

            }
            else
            {
                if(array[num] == num)
                    cout<<array[num]<<" is found"<<endl;
                else
                    cout<<num<<" not found"<<endl;
            }
        }
        void display()
        {
            for(int i = 0;i < 10; i++)
            {
                cout<<array[i]<<" "<<endl;
            }
        }
};

int main()
{
    Hash<int> h;

    h.Push(12);
    h.Push(33);
    h.Push(31);
    h.Push(34);
    h.Push(765);
    h.Push(9);
    h.Push(77);
    h.Push(88);
    h.Push(66);
    h.Push(10);

    h.search(9);
    h.search(2);
    h.search(33);

    cout<<endl;
    h.display();

    return 0;
}
