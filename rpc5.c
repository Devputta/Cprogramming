#include <stdio.h>

int main()
{
    int num;
    int a = 0, b = 1, next;

    printf("Enter the number for Fibonacci series: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        printf("%d ", a);

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}