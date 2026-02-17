// Write a program which accept string from user and count number of capital charactes.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountCapital
//  Description     :   Used to count the number of capital characters in given string.
//  Input           :   String
//  Output          :   Integer
//  Author          :   Siddhant Vikas Balwadkar
//  Date            :   20/01/2026
//
////////////////////////////////////////////////////////////////////////


int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
   
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Count of Capital characters are : %d",iRet);

    return 0;
    
}// End of Main