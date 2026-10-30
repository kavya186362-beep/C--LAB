#include <stdio.h>
int main(void)
{
    long long n, temp, digit, reverse = 0, sum = 0;
    int count = 0;

    printf("enter a pasitive intege:");
    scanf("%IId", &n);

    if (n <= 0)
    {
        printf("please enter a positive integer./n");
        return 0;
    }
    temp = n;
    while (temp > 0)
        ;
    {
        digit = temp % 10;
        count++;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    printf("number of digit=%d/n", count);
    printf("sum of digit=%IId/n", sum);
    printf("revered number=%IId/n", reverse);

    if (reverse = n)
        printf("%IId is apalindrome./n", n);

    else
        printf("%IId is not a palindrome./n", n);

    return 0;
}