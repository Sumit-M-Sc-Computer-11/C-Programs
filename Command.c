
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int no1 = 0,no2 = 0, ans = 0;
    printf("Total number of command line arguments are : %d\n",argc);
    
    if(argc == 3)
    {
        no1 = atoi(argv[1]);     // ASCII to Integer
        no2 = atoi(argv[2]);
        ans = no1 + no2;
        printf("Addition is : %d\n",ans);
    }
    
    return 0;
}

// gcc Command.c -o Myexe
// ./Myexe  11  21
