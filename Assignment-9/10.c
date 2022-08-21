#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
    int d;
    printf("Enter a,b, and c: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c;

    
    switch (discriminant>0)
    {
    case 0: 
        switch(discriminant<0)
        {
            case 0:
                root1 = root2 = -b / (2 * a);
                printf("root1 = root2 = %.2lf;", root1);  
                break;
            case 1:
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
                break;
        }
         
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1= %.2f and %.2f", root1, root2);
        break;      
    }
    return 0;
}