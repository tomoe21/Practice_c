#include<stdio.h>
#include<string.h>
#define MAX 100
#define NIL ('\0')

int findlength(char *s)
{
    if (s[0] == NIL)
    {
        return 0;
    }
    return 1+ findlength(s+1);
}

int main()
{
    char b[MAX];
    printf("Enter a string \n");
    scanf("%[^\n]",b);
    int len;
    len = findlength(b);
    printf("lenth of the string is : %d",len);
}