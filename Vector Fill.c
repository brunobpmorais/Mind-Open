
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P[5], I[5], i, x, j, pa=0, im=0;
    for (i=0; i<15; i++){
        scanf ("%d", &x);
        if (x%2==0){
            P[pa]=x;
            pa++;
            if (pa==5){
                for (j=0; j<5; j++){
                    printf ("par[%d] = %d\n", j, P[j]);
                }
                pa=0;
            }
        }
        else {
            I[im]=x;
            im++;
            if (im==5){
                for (j=0; j<5; j++){
                    printf ("impar[%d] = %d\n", j, I[j]);
                }
                im=0;
        }
    }
    }
    if(im>0)
        for(j=0;j<im;j++)
            printf("impar[%d] = %d\n", j, I[j]);
    if(pa>0)
        for(j=0;j<pa;j++)
            printf("par[%d] = %d\n", j, P[j]);

    return 0;
}
