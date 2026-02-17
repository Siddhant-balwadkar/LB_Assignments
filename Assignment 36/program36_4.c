
// Write a program which accept string from user and display only digits from that string.

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Description     :   Used to Display only digits
//  Input           :   String
//  Output          :   String
//  Author          :   Siddhant Vikas Balwadkar
//  Date            :   21/01/2026
//
////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
    
}
