#include<iostream>
using namespace std;

class Array
{
    private:
        int arr[100];
        const int size = 100;
    public:
        Array() {}

        void setArray(int x, int index)
        {
            if(index >= size)
            {
                cout<<"Array Index Out of Bound Exception"<<endl;
                exit(0);
            }
            arr[index] = x;
        }

        void display(int index)
        {
            cout<<arr[index]<<endl;
        }

        int operator[](int index)
        {
            if(index >= size)
            {
                cout<<"Array Index Out of Bound Exception"<<endl;
                exit(0);
            }
            return arr[index];
        }

};

int main()
{
    Array b;
    b.setArray(10,99);

    b.display(99);    

    cout<<b[150];

    return 0;
}