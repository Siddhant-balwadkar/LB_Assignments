
// Write a program which accept string from user and count number of white spaces.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountWhite
//  Description     :   Used to count white spaces
//  Input           :   String
//  Output          :   Integer
//  Author          :   Siddhant Vikas Balwadkar
//  Date            :   21/01/2026
//
////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d",iRet);

    return 0;

}
