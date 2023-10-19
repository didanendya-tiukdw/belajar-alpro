#include <stdio.h>

void main()
{
    //tanpa perulangan
    /*
    printf("kalimat ini semuanya sama, berulang-ulang\n");
    printf("kalimat ini semuanya sama, berulang-ulang\n");
    printf("kalimat ini semuanya sama, berulang-ulang\n");
    */

    // dengan perulangan; For in C 
    /*
    for (int i = 1; i <=10; i++)
    {
        printf(" %d kalimat ini semuanya sama, berulang-ulang\n", i);
    }
    */

    // dengan perulangan; For in C - INCREMENET
    /*
    for (int i = 1; i <=10; i++)
        {
        printf(" %d kalimat ini semuanya sama, berulang-ulang\n", i);
    }
    */

    // dengan perulangan; For in C - DECREMENT
    for (int i = 10; i >=1; i--)
    {
        printf(" %d kalimat ini semuanya sama, berulang-ulang\n", i);
    }
}