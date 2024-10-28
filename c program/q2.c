#include <stdio.h>

int main()
{
    int x;
    int y;
    if(x>y)
    {
        y = x-y;
    }
    else
    {
        y = y-x;
    }
    printf("Absolute value: %d\n", y);
}