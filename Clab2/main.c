#include<stdio.h>
#include<stdlib.h>

int main(){
    const int n = rand()%90 + 10;
    printf("vector size : %d\n", n);

    double v[n]; 

    for(int i = 0; i < n; i++){
        v[i] = ((double)rand() / RAND_MAX) * 100.0 - 50.0;
        printf("(%d)%.2f ", i,v[i]);
    }

    printf("\n");

    double min_poz = 50;
    uint f_poz = 0;
    uint p_poz;

    double max_neg = -50;
    uint f_neg = 0;
    uint p_neg;

    for(int i = 0; i < n; i++ ){
        if(min_poz >= v[i] && v[i] > 0){
            min_poz = v[i];
            f_poz = 1;
            p_poz = i;
        }

        if(max_neg < v[i] && v[i] < 0){
            max_neg = v[i];
            f_neg = 1;
            p_neg = i;
        }
    }

    printf("\n");

    if(f_poz)printf("ultimului element minimal pozitiv e %.2f cu poz %d", min_poz, p_poz);
    else ("nu exista elemente pozitive");

    printf("\n");

    if(f_neg)printf("primul element maximal negativ %.2f cu poz %d", max_neg, p_neg);
    else ("nu exista elemente negative");

    printf("\n");

    return 0;
}