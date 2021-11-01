// Input : 89451
// Output : 8   (9-1)
// Input : 5672
// Output : 5 (7 - 2)
// Input : 2222
// Output : 0 ( 2 - 2)
#include<stdio.h>

int MaxMin(int iNo)
{
    int iMax = 0, iMin = 9, iDigit = 0;
    while(iNo > 0)
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
        iNo = iNo / 10;
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
