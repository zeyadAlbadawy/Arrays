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

    printf("Enter 0 for ascending or Enter 1 for descending.");
    int r;
    scanf("%d", &r);
    if (r == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] > A[j])
                {
                    max = A[i];
                    A[i] = A[j];
                    A[j] = max;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] < A[j])
                {
                    max = A[i];
                    A[i] = A[j];
                    A[j] = max;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
