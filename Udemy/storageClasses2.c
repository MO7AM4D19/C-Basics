#include <stdio.h>
int sum(int num);
void main()
{
    printf("%d\n",sum(25));
    printf("%d\n",sum(91));
    printf("%d\n",sum(45));
}
int sum(int num)
{
    static int sum;
    sum+=num;
    return sum;
}
