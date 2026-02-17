// Accept character from user and check whether it is alphabet or not.(A-Z a-z)

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkAlpha
//  Description     :   Used to check given characeter is alphabet or not
//  Input           :   Integer
//  Output          :   boolean
//  Author          :   Siddhant Vikas Balwadkar
//  Date            :   18/01/2026
//
////////////////////////////////////////////////////////////////////////


BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}