#include <iostream>
using namespace std;

class MyString
{
    private:
        char str[100];
    public:
        void get_string()
        {
            cout<<"Enter String : ";
            cin>>str;
        }
        void operator!()
        {
            for(int i = 0; str[i] != '\0'; i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    str[i] += 32;
                }
                else if(str[i]>='a' && str[i]<='z')
                {
                    str[i] -= 32;
                }

            }
        }
        void display()
        {
            cout<<str<<endl;
        }
};

int main()
{
    MyString s1;

    s1.get_string();
    s1.display();
    !s1;
    s1.display();

    return 0;
}