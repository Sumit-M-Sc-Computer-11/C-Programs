#include<stdio.h>

int main()
{
    int no = 31;
    char *p = (char *)&no;
    
    printf("%d\n",*p);
    p++;
    
    printf("%d\n",*p);
    p++;
    
    printf("%d\n",*p);
    p++;
    
    printf("%d\n",*p);
    
    return 0;
}
