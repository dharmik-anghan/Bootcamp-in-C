// Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include <stdio.h>
 
int main()
{
    printf("Enter Three DIgit: ");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    a++;
    b++;
    c++;
    printf("a=%d, b=%d, c=%d", a, b, c);
    
    return 0;
}