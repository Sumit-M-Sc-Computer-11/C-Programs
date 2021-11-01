// Accept N number from user and display that number.

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iSize)                          // Step 6
{
    int i = 0;
    printf("Elements from the array are : \n");
    for(i=0; i< iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}
//-----------------------------------------------------------------
int main()
{
    int *arr = NULL;                                             // Step 1
    int iLenth = 0, i = 0;
    
    printf("Enter the number of elements\n");       // Step 2
    scanf("%d",&iLenth);
    arr = (int*)malloc(iLenth * sizeof(int));           // Step 3
    
    printf("Enter the elements\n");                       // Step 4
    for(i = 0; i< iLenth; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr,iLenth);// Display(100,5)                // Step 5
    free(arr);                                                      // Step 7
    return 0;
}

