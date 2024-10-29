#include <stdio.h>
int replace(int num)
{
    int res = 0,place = 1;
    while(num>0)
    {
        int digit = num%10;
        if(digit==0)
        {
            digit=1;
        }
        else if(digit==1)
        {
            digit=0;
        }
        
        res += digit * place;
        place*=10;
        num=num/10;
    }
    return res;
}
int main() {
    int num;
    printf("Enter binary number: ");
    scanf("%d", &num);
    
    int NewNum = replace(num);
    
    printf("New number: %d", NewNum);

    return 0;
}