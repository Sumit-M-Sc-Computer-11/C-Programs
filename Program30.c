// Accept number from user and return the largest digit
// Input : 7521
// Output : 7
// Input : 121
// Output : 2
// Input : 56892
// Output : 9

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
            if(iMax == 9)
            {
                break;
            }
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = MaxDigit(iValue);
        
    printf("Largest digit : %d\n",iRet);
    
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
