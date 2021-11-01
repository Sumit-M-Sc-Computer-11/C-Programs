#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0, iPos = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iValue)
        {   iPos = i; break;  }
    }
    if(i == iLength)
    { return -1; }
    else
    {   return iPos;   }
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0, iNo = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that you want to search\n");
    scanf("%d",&iNo);
    iRet = FirstOccurance(arr,iSize,iNo);
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurance is at: %d\n",iRet);
    }
        free(arr);
    return 0;
}
