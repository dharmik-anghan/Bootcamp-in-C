#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[7] = {0,4,7,10,10,3,1};

    int ans = 0, start = 0, end = 6, mid = (start+end)/2;

    while(start<end)
    {
        if(a[mid]>a[mid+1])
        {
            //Left side search
            if(a[mid-1] <= a[mid])
            {
                ans = mid;
                break;
            }
            end = mid;
        }
        else
        {
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    cout<<ans;
    return 0;
}