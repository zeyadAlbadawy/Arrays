#include <stdio.h>

int main()
{
    int A[5][5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the row\n");
        for (int j = 0; j < 5; j++)
        {
            printf("Enter The Following Element\n");
            scanf("%d", &A[i][j]);
        }
    }

    // summation of rows
    printf("Row Totals : ");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = A[i][j] + sum;
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
    // summtion of colums
    printf("Columns Totals : ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = A[j][i] + sum;
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}