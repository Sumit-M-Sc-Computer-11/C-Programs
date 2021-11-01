
#include<stdio.h>
#define INVALID -1

int RangeSum(unsigned int iStart, unsigned int iEnd)
{
    int iSum = 0,iCnt = 0;
    if(iStart >= iEnd)
    {
        return INVALID;
    }
    for (iCnt = iStart; iCnt <= iEnd;iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    printf("Enter staring index\n");
    scanf("%u",&iValue1);
    printf("Enter end index\n");
    scanf("%u",&iValue2);
    
    iRet = RangeSum(iValue1,iValue2);
    if(iRet == INVALID)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is : %d\n",iRet);
    }
    return 0;
}

