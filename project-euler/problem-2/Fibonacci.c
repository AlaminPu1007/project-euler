#include <stdio.h>

int main(void)
{
    long long int i, sum = 0;
    long long int t1 = 0, t2 = 1, nextTerm = 0, n;

    nextTerm = t1 + t2;

    printf("%d\t", nextTerm);

    for(i = 0; ; i++ )
    {
        if(nextTerm >= 4000000) break;

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;

        if(nextTerm % 2 == 0)
        {
            sum += nextTerm;
        }
    }

    printf("sum of event value is = %lld\n", sum);

    return 0;
}
