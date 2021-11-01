
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    printf("Total number of command line arguments are : %d\n",argc);
    
    for(i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    
    return 0;
}
