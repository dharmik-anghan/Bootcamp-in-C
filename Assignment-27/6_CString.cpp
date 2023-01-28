#include <iostream>
#include <cstring>
using namespace std;

class Cstring
{
    private:
        char str[20];
    public:
        void get_string()
        {
            cout<<"\nEnter String: ";
            cin>>str;
        }
        void display()
        {
            cout<<str<<endl;
        }
        Cstring operator+(Cstring x)
        {
            Cstring s;
            
            strcpy(s.str, str);
            strcat(s.str, x.str);

            return s;
        }
        int operator==(Cstring &x)
        {
            for(int i =0; str[i] != '\0'; i++)
            {
                for(int j = 0; x.str[j] != '\0'; j++)
                {
                    if(str[i] == x.str[j])
                        return 0;
                    else
                        return 1;
                }
            }
        }

};

int main()
{
    Cstring s1,s2,s3;

    s1.get_string();
    s2.get_string();
    
    cout<<endl;

    s3 = s1 + s2;
    s3.display();
    
    int result = s1==s2;
    if(result == 0)
        cout<<"Equal";
    else
        cout<<"Not Equal !";

    return 0;
}