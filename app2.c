#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the Array\n");
    scanf("%d", &n);
    int A[n];
    int max;

    for (int i = 0; i < n; i++)
    {
        printf("Enter The Following Element\n");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        max = A[0];
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    printf("The Maximum Number is %d", max);
}