#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    array<string,4> city {"Gujarat", "Maharastra", "Bengluru", "Uttar Pradesh"};

    for(auto i = city.rbegin(); i != city.rend(); i++)
    {
        cout<<*i<<"\n";
    }
    for(auto i = values.rbegin(); i != values.rend(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}