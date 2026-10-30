#include <stdio.h>
int main(void)
{
    int a, b;

    printf("enter two integers:");
    scanf("%d %d", &a, &b);

    printf("sum=%d/n", a + b);
    printf("difference=%d/n", a - b);
    printf("product=%d/n", a * b);

    if (b != 0)
    {
        printf("Quotient=%d/n", a / b);
        printf("Remainder=%d/n", a % b);
    }
    else
    {
    }

    return 0;
}
