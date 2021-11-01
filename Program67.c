#include<stdio.h>
#include<stdlib.h>
void DisplayEven(int Arr[], int iLength)
{
    int i = 0;
    if((Arr == NULL) || (iLength <=0))
    {return;}
    printf("Even elements are\n");
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0;
    printf("Enter the number of elements\n");
    scanf("%d",&iSize);
    arr = (int *)malloc(iSize * sizeof(int));
    if(arr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    printf("Enter the elemets\n");
    for(i = 0;i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    DisplayEven(arr,iSize); // DisplayEven(NULL, -2);
    free(arr);
    return 0;
}
