// Accept number from user and return its factorial
// Input : 5
// Output : 5*4*3*2*1       (120)

// Input :4
// Output : 4*3*2*1         (24)
//              1*2*3*4         (24)
# include<stdio.h>
int Fact(int iNo)
{
    int iCnt = 0, iMult = 1;
    if(iNo < 0)
    {   iNo = -iNo; }
   //           1           2               2
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;   // 4
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
