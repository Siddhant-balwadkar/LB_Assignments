
// Write a program to reverse a given number.

////////////////////////////////////////////////////////////////////
//
//  Function Name : ReverseNumber
//  Description :   Reverse the given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Siddhant Vikas Balwadkar
//  Date :          31/12/2025
//
////////////////////////////////////////////////////////////////////

class Logic
{
    void ReverseNumber(int n)
    {

        int iDigit = 0;
        while(n > 0)
        {
            iDigit = n%10;
            System.out.println(iDigit);
            n = n/10;
        }
    }
}
class program16_4
{
    public static void main(String a[])
    {
        Logic robj = new Logic();
        robj.ReverseNumber(1234);

    }
}

///////////////////////////////////////////////////////////////////

// Input : 1234
// Output : 4 3 2 1

///////////////////////////////////////////////////////////////////