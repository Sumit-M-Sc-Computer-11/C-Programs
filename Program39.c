#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    //          1               2           3
    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        if((iNo % iCnt) == 0)       // 4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    Factors(iValue1);
    
    return 0;
}
