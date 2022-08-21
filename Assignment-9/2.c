#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b;
        
    while(1)
    {
        printf("\n\n1. Addiotion\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("\n");
        printf("Enter Your Choise: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\nEnter two number: ");
            scanf("%d%d", &a,&b);
            printf("%d + %d = %d", a, b, a+b);
            break;

        case 2:
            printf("\nEnter two number: ");
            scanf("%d%d", &a,&b);
            printf("%d - %d = %d", a, b, a-b);
            break;

        case 3:
            printf("\nEnter two number: ");
            scanf("%d%d", &a,&b);
            printf("%d x %d = %d", a, b, a*b);
            break;            

        case 4:
            printf("\nEnter two number: ");
            scanf("%d%d", &a,&b);
            printf("%d / %d = %d", a, b, a/b);
            break;

        case 5:
            exit(0);
                
        }
    }//end of while
    return 0;
}