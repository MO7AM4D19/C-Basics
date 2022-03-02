/*
Auther: Mohamed Khalid Anis
Date: 2-3-2022
Program: this is Tic Tac Toe game
*/

//declaring functions
#include <stdio.h>
void DrawPlate(char CurrentPlate[10]);
void CheckPlate(char Turns[10],int CurrentChoice);
void UpdatePlate(char CurrentPlate[10],int CurrentChoice);
void WinCheck(char C[10]);

char error = 0,win=0,turn=0;

void main()
{
    //declaring variables
    char plates[10]={'0','1','2','3','4','5','6','7','8','9'};
    int PlayerChoice;
    //setting up the game
    printf("This is a tic tac toe game\n");
    printf("player 1:(X) \t player 2:(O)\n");
    while(1)
    {
        DrawPlate(plates);
        printf("please enter a valid number: ");
        scanf(" %d",&PlayerChoice);
        CheckPlate(plates,PlayerChoice);
        if(error==1)
        {
            printf("invalid number \n");
            error = 0;
            continue;
        }
        UpdatePlate(plates,PlayerChoice);
        turn++;
        WinCheck(plates);
        if(turn==9)
        {
            win=3;
        }
        switch(win)
        {
        case 1:
            printf("Player 1 wins!");
            break;
        case 2:
            printf("Player 2 wins!");
            break;
        case 3:
            printf("Draw");
            break;
        }
        if(win!=0)
        {
            break;
        }

    }

}

void DrawPlate(char CurrentPlate[10])
{
    for(int i=0;i<9;i++)
    {
        printf("|  %c  |",CurrentPlate[i]);
        if(i==2||i==5)
        {
            printf("\n");
        }
    }
    printf("\n");
}

void CheckPlate(char Turns[10],int CurrentChoice)
{
    if(CurrentChoice<0||CurrentChoice>8)
    {
        error=1;
    }
    else
    {
        if(Turns[CurrentChoice]=='X'||Turns[CurrentChoice]=='O')
        {
             error=1;
        }
    }
}

void UpdatePlate(char CurrentPlate[10],int CurrentChoice)
{
    if(turn%2==0)
    {
        CurrentPlate[CurrentChoice]='X';
    }
    else
    {
        CurrentPlate[CurrentChoice]='O';
    }
}

void WinCheck(char C[10])
{
    if((C[0]==C[1]&&C[1]==C[2])||(C[0]==C[3]&&C[3]==C[6])||(C[6]==C[7]&&C[7]==C[8])||(C[2]==C[5]&&C[5]==C[8])||C[0]==C[4]&&C[4]==C[8]||C[2]==C[4]&&C[4]==C[6])
    {
        if(turn%2==1)
        {
            win=1;
        }
        else
        {
            win=2;
        }
    }
}