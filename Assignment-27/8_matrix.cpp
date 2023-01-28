#include <iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void set_matrix()
        {
            cout<<"Enter Matrix Element (3x3) :\n";
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cin>>a[i][j];
                }
            }
        }
        void get_matrix()
        {
            cout<<"Matrix is :\n";
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void operator-()
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    a[i][j] = -a[i][j];
                }
            }
        }
};

int main()
{
    Matrix m;

    m.set_matrix();
    m.get_matrix();
    -m;
    m.get_matrix();

    return 0;
}