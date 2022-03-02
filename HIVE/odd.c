/*auther : Mohamed Khalid Anis
  date   : 16/11/2021
  program: this program asks the user for an integer and allows him to know if it is oddd or even*/

#include <stdio.h>
void main()
{
    int num;                                    /*declaring variables*/
    printf("please enter an integer:");         /*asking the user for an integer*/
    scanf(" %d",&num);
    if(num%2 ==0)                               /*even number block*/
    {
        printf("this number is even");
    }
    else                                        /*odd number block*/
    {
        printf("this number is odd");
    }
}