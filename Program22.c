// Input : 4521
// Output :  2
// Input : 8642
// Output : 4
// Input : 7139
// Output : 0

#include<stdio.h>
int EvenDigits(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}

