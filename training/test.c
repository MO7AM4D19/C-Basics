#include <stdio.h>
#include <string.h>
void main()
{
    struct field
    {
        int a;
        char b;
    }bit;
    struct field bit1={5,'A'};
    char *p=&bit1;
    *p=45;
    printf("\n%d",bit1.a);
}