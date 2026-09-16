#include<stdio.h>
#include<math.h>

int main(){
    //P-22 Ex11 a
    int n;
    do {
        printf("introdu n(2 cifre): ");
    }while(scanf("%d",&n) != 1 || n < 10 || n >100);

    printf("%d", n % 10 == n / 10 );

    //P-22 Ex11 a

    int a,b,c,d,e,s;

    printf("Intrdoucin ordine a,b,c,d,e,x,s");

    scanf("%d%d%d%d%d%d%d",a,b,c,d,e,x,s);

    if (s == -b/a)printf("S este solutie a ecuatiei: %dx + %d = 0",a,b);
    else if (s == (-d + sqrt()) )

    return 0; 
}