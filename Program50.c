// Input : 5
// Output : A   B   C   D   E
// Input : 3
//Output : A    B   C

#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    printf("\n");
        //      1                       2                   3
    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);  // 4
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    Pattern(iValue);
    return 0;
}

