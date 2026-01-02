
// Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description :   It is used to Check Even or Odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Siddhant Vikas Balwadkar
//  Date :          27/12/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
// Input :         4
// Output :        Even
// Input :         7
// Output :        Odd
////////////////////////////////////////////////////////////////////