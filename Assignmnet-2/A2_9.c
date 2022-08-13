// Write a program to print size of an int, a float, a char and a double type variable

#include <stdio.h>

int main()
{
    int a, b, c, d;
    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(char);
    d = sizeof(double);
    printf("int=%d, float=%d, char=%d, double=%d", a, b, c, d);
    
}