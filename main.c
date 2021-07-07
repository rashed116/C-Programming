#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, sum;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum is %d", sum);

    return 0;
}
