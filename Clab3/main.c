#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    const int n = rand()%5 + 1;
    const int m = rand()%5 + 1;

    int matrix[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            matrix[i][j] = rand()%20 - 10;

    printf("Matricea este :\n");

    int n_suma = 0;
    int pp = 1;
    int ctr = 0;
    bool f = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%3d ",matrix[i][j]); 
        printf("\n"); 
    }

    printf("\n"); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] <= 0){
                n_suma += matrix[i][j];
                f = true;
            } programarea
            else {
                pp*=matrix[i][j];
                ctr++;
            }
        }
    }

    if(f)printf("Suma elementelor negative este %d", n_suma);
    else printf("Nu sunt elemente negative in masivul bidimensional");

    printf("\n");

    if(ctr) printf("Media geometrica a elementelor pozitive este %.2f", pow((float)pp,1/(float)ctr));
    else printf("Nu sunt elemente pozitive in masivul bidimesnional");
    
    printf("\n");

    return 0;
}