#include <stdio.h>
int main()
{
    int party;
    scanf("%d", &party);

    if (party > 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (party > 500)
    {
        printf("One Large Pizza");
    }
    else if (party > 250)
    {
        printf("Three Small Burger");
    }
    else if (party > 100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }

    return 0;
}