#include <stdio.h>
extern void display()
{
    extern int i;
    printf("%d",++i);
}