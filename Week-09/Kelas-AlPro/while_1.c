# include <stdio.h>

int main()
{
    int input;
    printf("Masukkan bilangan : ");
    scanf("%d", &input);

    while (input != 1)
    {
        if (input % 2 == 1) //ganjil
        {
            input = input * 3 + 1;
        }
        else
        {
            input = input / 2;
        }
        printf("%d\n", input);
    }
    return 0;
    
}