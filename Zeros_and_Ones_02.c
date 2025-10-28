#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }

    int X;
    scanf("%d", &X);

    if (arra[X - 1] == 0)
    {
        arra[X - 1] = 1;
    }
    else
    {
        arra[X - 1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }

    return 0;
}