
# include<stdio.h>
int Fact(int iNo)
{
    int iMult = 1;
    if(iNo < 0)
    {   iNo = -iNo; }

    while(iNo > 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("Result is : %d\n",iRet);
    return 0;
}
