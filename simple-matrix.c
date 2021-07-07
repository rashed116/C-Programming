//Addition of two matrix
#include <stdio.h>
int main()
{
    int i, j, NR, NC;
    int A[10][10], B[10][10], C[10][10];

    printf("Enter NR and NC: \n");
    scanf("%d %d", &NR, &NC);

    //Scanning A matrix
    printf("Enter elements for A matrix: \n");
    for (i = 0; i < NR; i++)
    {

        for (j = 0; j < NC; j++)
        {
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    //Printing A matrix
    printf("A= ");
    for (i = 0; i < NR; i++)
    {
        printf("\t");
        for (j = 0; j < NC; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    //Scanning B matrix
    printf("Enter elements for B matrix: \n");
    for (i = 0; i < NR; i++)
    {

        for (j = 0; j < NC; j++)
        {
            printf("B[%d][%d]= ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    //Printing B matrix
    printf("B= ");
    for (i = 0; i < NR; i++)
    {
        printf("\t");
        for (j = 0; j < NC; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    //Adding two matrix
    for (i = 0; i < NR; i++)
    {
        for (j = 0; j < NC; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    //Printing C matrix
    printf("C= ");
    for (i = 0; i < NR; i++)
    {
        printf("\t");
        for (j = 0; j < NC; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf(" \n");
    }
}
