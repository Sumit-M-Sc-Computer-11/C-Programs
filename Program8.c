
# include<stdio.h>
#include<stdbool.h>
// Input : 15   5
// Output : True
// Input : 21   6
// Output : False

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet;
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    
    bRet = CheckDivisible(iValue1,iValue2);
    if(bRet == true)
    {
        printf("%d is divisble by %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not devisible by %d\n",iValue1,iValue2);
    }
    return 0;
}






