/*
Auther:Mohamed Khalid Anis
Date:25-2-2022
program:This is a guessing game,The user have 5 tries to guess the number that the computer generated between 0 and 20
*/

//including liberaries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    //declaring variables
    int randNum,GuessNumber,i;
    //Generating the random number
    time_t t;
    srand((unsigned) time(&t));
    randNum=rand()%21;
    //the Game
    printf("This is a guessing Game,You have 5 tries to geuss the number \n");
    for(i=1;i<=5;i++)
    {
        //asking user for input
        printf("Please enter a number between 1 and 20:");
        scanf(" %d",&GuessNumber);
        if(GuessNumber<0 || GuessNumber>20)
        {
            printf("Invalid number\n");
        }
        else if(GuessNumber>randNum)
        {
            printf("Too large,you have %d tries left\n",5-i);
        }
        else if(GuessNumber<randNum)
        {
            printf("Too small ,you have %d tries left\n",5-i);
        }
        else
        {
            printf("You'r godame right");
            goto end;
        }
    }
    printf("you lost, Game over,the number is %d",randNum);
    end:
    NULL;
}