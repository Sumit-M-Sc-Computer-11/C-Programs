// Accept number from user and check whether that number is dicisible by 3 and 5.
// Input : 10
// Output : No

// Input :15
// Output : Yes

////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckDivisble
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check whetheer number is divisible by 3 and 5
//  Date : 01/03/2021
//  Author : Piyush Manohar Khairnar
//
////////////////////////////////////////////////////////////////////////////
# include<stdio.h>
#include<stdbool.h>
bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    { return true; }
    else
    { return false; }
}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = CheckDivisible(iValue);   // CheckDivisible(7)  15  12  7
    if(bRet == true)
    {
        printf("%d is divisble by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not devisible by 3 and 5\n",iValue);
    }
    return 0;
}






