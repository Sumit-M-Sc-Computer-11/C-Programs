// Accept number from user and check whether that number is pallindrom or not
// Input : 7521
// Output : False
// Input : 121
// Output : True
// Input : 75057
// Output : True

#include<stdio.h>
#include<stdbool.h>
// Time complexity : O(N)   where N is the number of digits in the input
bool CheckPallindrome(int iNo)
{
    int iDigit =0, iRev = 0, iTemp = 0;
    if(iNo < 0)
    {   iNo = -iNo; }
    iTemp = iNo;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {return true;}
    else
    {return false;}
}

int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("It is pallindrome\n");
    }
    else
    {
        printf("It is not pallindrome\n");
    }
        return 0;
}




/*
 
    iNo = 751                                                   iRev = 0
 
    751 % 10                    1                               iRev = (iRev*10)+digit
    ino = 751 / 10            75                              iRev = (0 * 10) + 1               1
    
    75 % 10                     5                               iRev = (iRev*10)+digit
    ino = 75 / 10              7                                iRev = (1 * 10) + 5                15
 
    7 % 10                       7                              iRev = (iRev*10)+digit
    ino = 7 / 10                0                              iRev = (15 * 10) + 7                 157
 
 
 
 
 
 
 
 
 */
