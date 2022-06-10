
# Even Fibonacci numbers

https://projecteuler.net/problem=2

We have to find the sum of the even-valued terms of fibonacci.

initial value of : <br>
t1 = 0, t2 = 1, nextTerm = 0

get fibonacci first term from here

 nextTerm = t1 + t2;

this loop will be continue until nextTerm reach to 4000000. <br>
we have to just calculate the summition of even fibonacci value.

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