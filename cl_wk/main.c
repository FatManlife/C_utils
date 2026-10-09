#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Din carte la pc
// Pag.22-ex.11,12
// Pag.23-ex.10
// Pag.24-ex.20,21,26,27
// Pag.25-ex.29
// Pag.26-ex.30,33,41
// Pag.27-ex.42,48
// Pag.28-ex.54,56

int main(){
    //P-22 Ex11 a
    //int n;

    // do {
    //     printf("introdu n(2 cifre): ");
    // }while(n < 10 || n >100);

    // printf("%d", n % 10 == n / 10 );

    //P-22 Ex11b 
    // int a,b,c,d,e,s;

    // printf("Intrdoucin ordine a,b,c,d,e,x,s");

    // scanf("%d%d%d%d%d%d%d",a,b,c,d,e,s);

    // if (s == -b/a)printf("S este solutie a ecuatiei: %dx + %d = 0",a,b);
    // else if (s == (-d + sqrt(d*d+(-4)*e*c))/(2*c) || s == (-d - sqrt(d*d+(-4)*e*c))/(2*c)) printf("S solutie a ecuatiei: %dx^2 + %dx + %d",c,d,e);
    // printf("Solutia nu se potriveste");

    //P-22 Ex11c
    // int n,m,k;
    // printf(n % m == 0 && n % k != 0 ? "n indeplineste conditia" : "n nu indeplineste conditia");


    //P-22 Ex11/12d
    // int a,b,c;
    // printf(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b ? "laturile sunt pitagoriene" : "laturile nu sunt pitagoriene");

    //P-22 Ex11e
    // int a,b,c;
    // printf( a + b < c || a + c < b || b + c < a ? "nu exista triunghi" : "Exista triunghi" )

    //P-22 Ex11f
    // int a,b,c;
    // printf((-b + sqrt(b*b+(-4)*a*c))/(2*a) >= 0 && (-b - sqrt(b*b+(-4)*a*c))/(2*a) < 0 || (-b + sqrt(b*b+(-4)*a*c))/(2*a) <= 0 && (-b - sqrt(b*b+(-4)*a*c))/(2*a) > 0 ? "ecuatia are exact o radacina pozitiva" : "ecuatia nu are exact o radacina pozitiva");  

    //P-22 Ex11h
    // int n;
    // printf(n / 100 >= 1 && n / 100 < 10 ? "nr este de 3 cifre" : "nr nu este de 3 cifre");

    //P-24 Ex20
    // int a,b,c;

    // if(a < b && c > b) printf("Crescator:%d,%d,%d\nDescrescator:%d,%d,%d\n", a,b,c,c,b,a);
    // else if(a > b && a < c)printf("Crescator:%d,%d,%d\nDescrescator:%d,%d,%d\n", b,a,c,c,a,b);
    // else printf("Crescator:%d,%d,%d\nDescrescator:%d,%d,%d\n", c,b,a,a,b,c);

    //P-24 Ex21
    // int a,b,c

    // if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180)printf("Nu este triunghi");
    // else {
    //     if (a != b != c)printf("Triunghi scalen");
    //     else if ( a == b == c) printf("Triunghi echilateral");
    //     else printf("Triunghi isoscel");
    // }

    //P-24 Ex24
    // int n, prod = 1;

    // for(int i = 1; i <= n; i++)prod *= i;

    // printf("Ultima cifra a produsului %d", prod % 10);

    //P-25 Ex29
    // const int n = rand()%100 + 1;

    // int v[n];  
    // int max = 0;
    // uint flag = 0;

    // int prag;

    // printf("Intrdou valoarea maxima limita : ");
    // scanf("%d", &prag);

    //A)
    // for(int i = 0; i < n; i++)
    // {
    //     v[i] = rand()%100 - 50;
    //     if (i == 0) max = v[i];
    //     else if (max < v[i]) max = v[i];
    //     printf("%4d", v[i]);
    // }

    //B)
    // for(int i = 0; i < n; i++)
    // {
    //     v[i] = rand()%100 - 50;
    //     if ((i == 0 || max < v[i]) && v[i] <= prag){
    //         max = v[i]; 
    //         flag = 1;
    //     }
    //     printf("%4d", v[i]);
    // }

    // printf("\n\n");

    // if (flag == 0 ) printf("Nu exista numere mai mici de %d", prag); 
    // else printf("Maximu in %d este %d", prag, max);

    // printf("\n");

    // printf("\n");
    
    // int max = v[0];

    // int pos[n];
    // int j = 0;

    // //A)
    // for(int i = 0; i< n; i++){
    //     if (max > v[i])continue;
    //     max = v[i];
    // }

    // for(int i = 0; i< n; i++){
    //     if (max != v[i])continue;
    //     pos[j] = i;
    //     j++;
    // }

    // printf("Nr maximal e %d\n", max);
    
    // printf("Pos: ");
    // for(int i = 0; i < j; i++)printf("%d ", pos[i]);
    // printf("\n");

    //Ex13 p53

    // int n;

    // printf("Intrdou n de la tastiera: ");

    // scanf("%d", &n);

    // int v[n];

    // for(int i = 0; i < n; i++){
    //    printf("Introdu v[%d]: ", i) ;
    //    scanf("%d", &v[i]);
    // }

    // printf("\nVectorul: ");

    // for(int i = 0; i < n; i++) printf("%d ", v[i]);

    // bool f = true;

    // for(int i = 0; i < n/2; i++)
    //     if(v[i] != v[n-i-1]){
    //         f = false;
    //         break;
    //     }

    // printf("\n");

    // if(f)printf("Vectorul este simetric");
    // else printf("Vectorul nu este simetric");

    // printf("\n");

    //Ex23 p56
    // int n;

    // printf("Intrdou n de la tastiera: ");

    // scanf("%d", &n);

    // int v[n];

    // for(int i = 0; i < n; i++){
    //    printf("Introdu v[%d]: ", i) ;
    //    scanf("%d", &v[i]);
    // }

    // printf("\nVectorul: ");

    // for(int i = 0; i < n; i++) printf("%d ", v[i]);

    // int ctr = 0;
    // int ctr_f = 0;

    // for(int i = 0; i < n; i++){
    //     if(v[i] != 0 )ctr = 0;
    //     if(ctr_f < ctr) ctr_f = ctr;
    //     ctr++;
    // }

    // printf("Cea mai lunga secventa de zeroruri e %d", ctr_f);

    //Ex7 p/65

    // int x, y;

    // printf("Intrdou nr de randuri: ");
    // scanf("%d", &x);

    // printf("Intrdou nr de coloane: ");
    // scanf("%d", &y);

    // int m[x][y];

    // for(int i = 0; i < x; i++)
    //     for(int j = 0; j < y; j++)
    //         m[i][j] = rand()%19 - 9;

    // printf("\n"); 

    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++)printf("%3d ", m[i][j]);
    //     printf("\n");
    // }

    // printf("\n");

    // int s = 0;
    // int ctr = 0;

    // for(int i = 0; i < x; i++)
    //     for(int j = 0; j < y; j++)
    //         if(m[i][j] > 0){
    //             s += m[i][j]; 
    //             ctr++;
    //         }

    // printf("Medica aritmetica a elemntelor pozitive este %.2f \n", (float)s/ctr);

    //Pr11 p65

    // int x, y;

    // printf("Intrdou nr de randuri: ");
    // scanf("%d", &x);

    // printf("Intrdou nr de coloane: ");
    // scanf("%d", &y);

    // int m[x][y];

    // for(int i = 0; i < x; i++)
    //     for(int j = 0; j < y; j++)
    //         m[i][j] = rand()%19 - 9;

    // printf("\n"); 

    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++)printf("%3d ", m[i][j]);
    //     printf("\n");
    // }

    // printf("\n");

    // int s = 0;
    // int p = 1;
    // bool f = true;

    // //c)
    // for(int i = 0; i < x; i++)
    //     for(int j = 0; j < y; j++)
    //         if((m[i][j]%3 == 0 || m[i][j]%2 == 0) && m[i][j] != 0){
    //             s += m[i][j];
    //             p *= m[i][j];
    //             f = false;
    //         }

    // if(f)printf("Nu exista elemente divizibile cu 3");
    // else {
    //     printf("Suma este %d\n", s);
    //     printf("Produsul este %d", p);
    // }

    // printf("\n");

    // return 0;
    // //p66 ex 26
    // const int x = 4;
    // const int y = 2;
    // const int p = 6;

    // int m1[x][y], m2[y][p], m3[x][p];

    // for(int i = 0; i < x; i++)
    //     for(int j = 0; j < y; j++ ){
    //         m1[i][j] = rand()%20 - 10;
    //     }

    // for(int i = 0; i < y; i++)
    //     for(int j = 0; j < p; j++ ){
    //         m2[i][j] = rand()%20 - 10;
    //     }

    // printf("M1 :\n");

    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++ )
    //         printf("%3d ",m1[i][j]) ;
    //    printf("\n"); 
    // }

    // printf("\nM2 :\n");

    // for(int i = 0; i < y; i++){
    //     for(int j = 0; j < p; j++ )
    //         printf("%3d ",m2[i][j]) ;
    //    printf("\n"); 
    }

    // printf("\nSum M3 :\n");

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++ ){
    //         m3[i][j] = m2[i][j] + m1[i][j];
    //         printf("%3d ",m3[i][j]) ;
    //     }
    //    printf("\n"); 
    // }

    // for(int i = 0; i < n; i++)
    //     for(int j = 0; j < n; j++ )
    //         m3[i][j] = 0;

    printf("\nProdus M3 :\n");

    // for(int i = 0 ; i < x; i++)
    //     for(int j = 0; j < p; j++)
    //         m3[i][j] = 0;

    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < p; j++ ){
    //         for(int z = 0; z < y; z++){
    //             m3[i][j] += m1[i][z] * m2[z][j];
    //         }
    //         printf("%3d ",m3[i][j]) ;
    //     }
    //    printf("\n"); 
    // }


    //De extras la ecran elementele ca sa verificam inegalitatile 
    //De antrenat 3 extrageri pentru fiecare domeniu sa fie realizat lini coloane serpuni (dreapta jos stanga etc.)
    //Inegalitatile pentru taote 4 domenii i < j < n-1

    printf("\n"); 

    return 0;
}

//pr 20,21,22,24 p56 p53 pr 12;