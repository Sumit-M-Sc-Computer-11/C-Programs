#include<stdio.h>

int MaxMin(int iNo)
{
    int iMax = 0, iMin = 9, iDigit = 0;
    for(; iNo > 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
    }
    return iMax - iMin;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet = MaxMin(iValue1);
    
    printf("Diffrence is :%d\n",iRet);
    return 0;
}
