#include <stdio.h>

int func(int A[], int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (A[i] == A[j])
            {
                return A[i];
            }
        }
    }
}

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
    int rep = func(A, n);
    printf("The Repeting Element in the Entered Array is %d .", rep);
}