#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c;
        
    while(1)
    {
        printf("\n############################################\n");
        printf("1. To check isosceles triangle or not\n");
        printf("2. To check right angled triangle or not\n");
        printf("3. To check equilateral triangle or not\n");
        printf("4. Exit\n");
        
        printf("\n");
        do{
            printf("Enter Your Choise: ");
            scanf("%d", &n);
        }while (n < 0 || n>5);
        
        printf("Enter length of three sides of triangle: ");
        scanf("%d%d%d", &a, &b, &c);

        switch (n)
        {
        case 1: if(a==b || b==c || c==a)
                    printf("isoscelesn");
                else
                    printf("not isoscelesn");
                break;

        case 2: if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b)
                    printf("right angled trianglen");
                else
                    printf("not right angled trianglen");
                break;

        case 3: if((a==b) && (b==c))
                    printf("equilateral trianglen\n");
                else
                    printf("not equilateral triangle\n");
                break;
        case 4:
            exit(0); 

        }
    }//end of while
    return 0;
}