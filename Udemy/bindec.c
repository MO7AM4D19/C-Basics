/*****************************************************************************************************************************
Date: 7/5/2022
Auther: Mohamed Khalid Anis
Program: this program transforms the number from decimal to binary and vice versa
*****************************************************************************************************************************/
#include <stdio.h>
#include "stypes.h"
void BinToDec();
void DecToBin();
const u8 bitValue[8]={1,2,4,8,16,32,64,128};
void main()
{
    u8 mode;
    u32 num;
    printf("enter 0 to change from binary to decimal and 1 for vice versa: ");
    scanf(" %d",&mode);

    while(1)
    {
    if(mode==0)
    {
        BinToDec();
        break;
    }
    else if(mode==1)
    {
        DecToBin();
        break;
    }
    else
    {
        printf("wrong mode number \n");
        printf("enter 0 to change from binary to decimal and 1 for vice versa: ");
        scanf(" %d",&mode);
    }
    }
}
void BinToDec()
{
    u8 num[8];
    u32 decNum=0;
    printf("enter the 8 bits you want to transform: \n");
    for(int i=0;i<8;i++)
    {
        printf("enter bit number %d:",i);
        scanf(" %d",&num[i]);
        if(num[i])
        {
            decNum+=bitValue[i];
        }
    }
    printf("%d",decNum);
}
void DecToBin()
{
    s32 num;
    u8 bin[8];
    printf("enter the number you want to transform: ");
    scanf(" %d",&num);
    for(int i=7;i>=0;i--)
    {
        if((num-bitValue[i])>0)
        {
            bin[i]=1;
            num-=bitValue[i];
        }
        
    }
    for(int i=7;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}