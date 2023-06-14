#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> forwardlist1={3,2,9,4,13};
    forward_list<int> forwardlist2={8,1,2,34,5,12};

    forward_list<int>::iterator it;
    forward_list<int>::iterator it2;
    it = forwardlist1.begin();
    it++;
    it2 = forwardlist2.begin();
    // forwardlist1.splice_after(it,forwardlist2,it2,forwardlist2.end());
    forwardlist2.splice_after(it2,forwardlist1,it,forwardlist1.end());

    cout<<"List 1\n";
    for(auto i : forwardlist1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"List 2\n";
    for(auto i : forwardlist2)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}