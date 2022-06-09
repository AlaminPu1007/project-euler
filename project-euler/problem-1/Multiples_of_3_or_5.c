#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if( (i % 3 == 0) || (i % 5 == 0) )
        sum += i;
    }

    printf("sum of 3 or 5 is = %d\n", sum);

    return 0;
}
