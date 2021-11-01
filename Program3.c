#include <stdio.h>

int Maximum(int,int);

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Maximum(iNo1,iNo2);
    
    printf("Maximum number is : %d\n",iRet);
    return 0;
}

int Maximum(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    { return iValue1; }
    else
    { return iValue2; }
}

// OS -> main -> Maximum -> main -> OS









