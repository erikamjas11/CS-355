#include <stdio.h>

int main(void)
{
    int i;
    int n;

    printf("Please enter an integer: ");
    scanf("%d", &n);

    if  (n < 0)
            printf("Integer Not valid.\n");

    for (i=0; i<=n; i++)
    {
        if (i%15 == 0)
            printf ("FizzBuzz\n");
        else if ((i%3) == 0)
            printf("Fizz\n");
        else if ((i%5) == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }


    return 0;
}

