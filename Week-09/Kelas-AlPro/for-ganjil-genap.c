#include <stdio.h>

void main()
{
    for (int i = 1; i <=20; i++)
    {
        if(i % 2 == 0) 
        {
            printf("%d adalah bilangan genap\n", i);
        }
        else
        {
            printf("%d adalah bilangan ganjil\n", i);
        } 

    }
}