#include <stdio.h>
int main()
{
    int x;
    int y;
    
    int count;
    int minus_sum;
    int plus_sum;
    
    if(x==0)
    {
        count++;
    }
    else if(x<0)
    {
        minus_sum=+x;
    }
    else
    {
        plus_sum=+x;
    }
    
    printf("Count: %d\n", count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: $d\n", plus_sum);

    return 0;
}