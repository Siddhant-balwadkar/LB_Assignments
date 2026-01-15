// Write a to check whether a number is perfect number or not

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description :   It is used to check whether number is perfect or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Siddhant Vikas Balwadkar
//  Date :          02/01/2026
//
////////////////////////////////////////////////////////////////////

class logic
{
    void CheckPerfect(int No)
    {
        int iSum = 0;
        
        for(int i = 1; i <= (No/2); i++)
        {
           if((No%i) == 0)
           {
                iSum += i;
           }
           
        }
        if(iSum==No)
        {
            System.out.println("It is an Perfect Number");
        }
        else
        {
            System.out.println("It is not an Perfect Number");
        }
    }

}

class program20_3
{
    public static void main(String a[])
    {
        logic lobj=new logic();
        lobj.CheckPerfect(6);
    }
}

/////////////////////////////////////////////////////////////////
//
// Input : 6
// Output : It is an perfect number
//
/////////////////////////////////////////////////////////////////
