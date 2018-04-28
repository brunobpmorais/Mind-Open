#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;

    while(1){
        scanf("%d", &n);
        if(n==0)
            break;
        int M[100][100], mia=1, mib=n-2, a=1, b=2;
        for(k=0; k< n; k++){
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    if(i==0 || j==0 || i==n-1 || j==n-1)
                        M[i][j]=a;
                    if((i==mia&&j>=mia&&j<=mib) || (j==mia&&i>=mia&&i<=mib) || (i==mib&&j>=mia&&j<=mib) || (j==mib&&i>=mia&&i<=mib))
                        M[i][j]=b;}}
            mia++; mib--; b++;}
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j==0)
                    printf("%3d", M[i][j]);
                else
                    printf(" %3d", M[i][j]);
                
            }

                    printf("\n");
                    }
printf("\n");
       }
       return 0;
}
