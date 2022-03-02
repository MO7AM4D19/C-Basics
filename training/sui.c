#include <stdio.h>
void main(int argc, char *argv[])
{
    int number_of_arguments = argc;
    char * argument1 = argv[0];
    char * argument2 = argv[1];
    printf("number of arguments = %d \n",argc);
    printf("argument1 = %s \n",argument1);
    printf("argument2 = %s \n",argument2);
}