#include <stdio.h>
#pragma pack(1)
struct Date
{
    unsigned int Day: 5;
    unsigned int Month : 4;
    unsigned int Year : 15;
};
int main()
{
    struct Date obj;
    int i,j,k;
    
    printf("Enter day\n");
    scanf("%d",&i);
    obj.Day = i;
    printf("Enter day\n");
    scanf("%d",&j);
    obj.Month = j;
    printf("Enter day\n");
    scanf("%d",&k);
    obj.Year = k;
    printf("%d/%d/%d\n",obj.Day,obj.Month,obj.Year);
    return 0;
}
