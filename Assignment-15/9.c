#include <stdio.h>

int sort(int num[], int i, int j);

int main()
{
    int num1[5] = {1, 3, 5, 7, 9};
    int num2[5] = {0, 2, 4, 6, 8};
    int k = 0,i=0,j=0,c[10];

    for(k = 0; k < 10; k++)
    {
        if(i >=5)
        {
            while(k <=10)
            {
                c[k] = num2[j];
                k++;
                j++;

                if(k == 10)
                    break;
            }
        }
        else if(num1[i]< num2[j])
        {
            c[k] = num1[i];
            i++;
        }
        else if(j >=5)
        {
            while(k <=10)
            {
                c[k] = num1[i];
                k++;
                i++;

                if(k == 10)
                    break;
            }
        }
        else{
            c[k] = num2[j];
            j++;
        }

    }

    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}
