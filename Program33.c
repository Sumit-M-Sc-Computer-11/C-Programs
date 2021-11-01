// Accept number from user and return the smallest digit
// Input : 7526
// Output : 2
// Input : 101
// Output : 0
// Input : 58902
// Output : 0

#include<stdio.h>

int MinDigit(unsigned long int iNo)     // unsigned long int is 8 byte ie 64 bits long max value 2 ^ 64
{
    int iDigit = 0, iMin = 9;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
            if(iMin == 0)
            {
                break;
            }
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    unsigned long int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%lu",&iValue);
    iRet = MinDigit(iValue);
        
    printf("Smallest digit : %d\n",iRet);
    
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
