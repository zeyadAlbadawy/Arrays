#include <stdio.h>
int func(int A[], int n);

int i, j;
int main()
{
    int n;
    printf("Enter The Size\n");
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter The Following Element\n");
        scanf("%d", &A[i]);
    }

    int x = func(A, n);
}

int func(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i] == A[j])
                break;
        }

        if (i == j)
            printf("%d ", A[i]);
    }
}