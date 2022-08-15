// Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

#include <stdio.h>
 
int main()
{
    printf("Enter Three DIgit: ");
    int a;
    scanf("%d", &a);
    printf("a=%d\n");

    int x = a%10*100 + a/10;
    printf("a=%d", x);
    
    return 0;
}
