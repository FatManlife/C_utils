#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    //V12
    system("clear");
    float x1,x2,px,a,b,c,x,F;
    int n = 0;

    printf("Introdu x1: ");
    scanf("%f", &x1);

    do { 
        printf("Introdu x2(x2 > x1): ");
        scanf("%f", &x2);   
    } while(x1 > x2);
 
    do { 
        printf("Introdu px: ");
        scanf("%f", &px);
   } while(px <= 0);
  
    printf("\nIntrodu a: ");
    scanf("%f", &a);
    printf("Introdu b: ");
    scanf("%f", &b);
    printf("Introdu c: ");
    scanf("%f", &c);


    x = x1;

    printf("\n\tRESULTS : \n\n");

    while(x < x2){
        n++;

        if(c + b < 0 && a != 0 ){
            if (b*b - x == 0) printf("Impartirea la 0 nu exista");
            else F = (a*cos(x)*cos(x) + c)/(b*b-x); 
        } 
        else if ( c + b > 0 && a == 0) 
        {
            if (b*b - c*x == 0)printf("Impartirea la 0 nu exista");
            else F = (a*x - log(b*x))/(b*b - c*x);
        }
        else{
            if(a*a + c + b*x == 0)printf("Impartirea la 0 nu exista");
            else F = (3*sin(x) + 4*log(2*x))/(a*a + c + b*x);
        } 

        printf("%3i) x=%.3f F=%.3f\n",n,x,F);

        x += px;
    }

    getchar();

    return 0;
}