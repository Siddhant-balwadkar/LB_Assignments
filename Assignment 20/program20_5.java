// Write a program to find the smallest digit in a given number

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindSmallestDigit
//  Description :   It is used to find the smallest digit in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Siddhant Vikas Balwadkar
//  Date :          02/01/2026
//
////////////////////////////////////////////////////////////////////


class logic
{
    void FindSmallestDigit(int No)
    {
        int min = No, digit;
        while(No > 0)
        {
            digit = No%10;
            if(digit < min)
            {
                min = digit;
            }
            No = No/10;
        }
        System.out.println(min);
    }

}

class program20_5
{
    public static void main(String a[])
    {
        logic lobj = new logic();
        lobj.FindSmallestDigit(82457);
    }
}

//////////////////////////////////////////////////////////////////////////
//
// Input : 82457
// Output :  2
//
//////////////////////////////////////////////////////////////////////////
