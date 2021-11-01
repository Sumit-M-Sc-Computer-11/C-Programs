#include <stdio.h>

int main()
{
    struct Demo
    {
        int i;
        int j;
    };
    typedef struct Demo DEMO;
    typedef struct Demo * PDEMO;
    typedef struct Demo ** PPDEMO;
    
    typedef struct Demo
    {
        int i;
        int j;
    }DEMO, *PDEMO, **PPDEMO;
    
    DEMO obj;               // struct Demo obj;
    PDEMO p = &obj;     // struct Demo *p = &obj;
    PPDEMO q = &p;      // struct Demo **q = &p;
    
    obj.i = 11;
    obj.j = 21;
    
    return 0;
}
