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
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix M)
        {
            Matrix temp;
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    temp.a[i][j] = a[i][j] + M.a[i][j];
                }
            }

            return temp;
        }
};

int main()
{
    Matrix m1,m2,m3;

    m1.set_matrix();
    m2.set_matrix();

    cout<<"M1 Matrix is:\n";
    m1.get_matrix();

    cout<<"M2 Matrix is:\n";
    m2.get_matrix();
    
    cout<<"M3 = M1+M2, Matrix is:\n";
    m3 = m1+m2;

    m3.get_matrix();

    return 0;
}