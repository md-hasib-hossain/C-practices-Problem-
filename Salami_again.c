#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];

    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arra[i]);
    }

    int max = arra[0];

    for (int i = 0; i < n; i++)
    {
       if (arra[i] > max)
       {
        max = arra[i];
       }
       
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ", max - arra[i]);
    }
    
    return 0;
}