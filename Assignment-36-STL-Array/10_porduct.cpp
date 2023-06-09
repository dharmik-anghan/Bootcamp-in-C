#include <iostream>
#include <math.h>
using namespace std;

int divided(int dividend, int divisor)
{
    if(dividend == 0)
        return 0;
    if(divisor == 0)
    {
        cout<<"Not Possible"<<endl;
        return 0;
    }

    int sign = (dividend < 0) ^ (divisor < 0);

    dividend = abs(dividend);
    divisor = abs(divisor);

    if(divisor == 1)
        return ((sign == 0) ? dividend : -dividend);
    
    int ans = exp(log(dividend) - log(divisor)) + 0.0000000001;
        return ((sign == 0) ? ans : -ans);
}
int main()
{
    
    int num[] = {1,2,3,0,0};  
    int n = 5,count = 0, multi = 1;  
    int ans[n];


    for(int i=0; i < n;i++)
    {
        if(num[i] != 0)
            multi = multi*num[i];
        else
        {
            count++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            if(num[i] != 0)
            {
                ans[i] = divided(multi,num[i]);
            }
            else
            {
                ans[i] = 0;
            }
        }
        else
        {
            if(count == 1)
            {
                if(num[i] != 0)
                    ans[i] = 0;
                else
                    ans[i] = multi;
            }
            else
            {
                ans[i] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;

}