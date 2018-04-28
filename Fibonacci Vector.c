#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int T, N[61], n, i, x;
    for (n=0; n<=60; n++){
        if (n==0) N[0]=0;
        if (n==1) N[1]=1;
        if (n>1){
            N[n]=N[n-1] + N[n-2];
        }
    }
    scanf ("%lld", &T);
    for (i=0; i<T; i++){
        scanf ("%lld", &n);
        printf ("Fib(%lld) = %lld\n", n, N[n]);

    }
    return 0;
}
