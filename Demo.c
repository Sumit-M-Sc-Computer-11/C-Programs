
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *p , *q;
    int i = 0;
    
    p = (int *)malloc(sizeof(int) * 4);
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    printf("Address of malloc : %u\n",p);
    
    for(i = 0; i < 4; i++)
    {
        printf("%d\n",p[i]);
    }
    
    q = (int *)realloc(p, sizeof(int) * 6);
    printf("Address of realloc : %u\n",q);
        
    for(i = 0; i < 4; i++)
    {
        printf("%d\n",q[i]);
    }
    return 0;
}


// char ch = 'a';




