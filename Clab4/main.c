#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void checkInt(char *mesj, int *val, int limit){
     int f = 0;
     int ch = 0;

     do{
        printf("%s", mesj);

        f = scanf("%d", val);

        if (f == EOF)
            exit(0);

        if(f != 1)
            while((ch = getchar()) != '\n' && ch != EOF);

    } while(f != 1 || *val <= limit );

   
}

bool warningMem(int *n, int *m){
    if(*n == 0 || *m == 0 ){
        printf("Trebuie sa aloci memorie tabloului mai intai !!!");
        getchar();
        return true;
    }
    return false;
}

void Allocatemem(int *ch, int *n, int *m, int ***matrix){
    system("clear");
    int f;

    if(*n != 0 || *m != 0 ){
        printf("Trebuie sa elibrezi memoria inainte ca sa introduci valori noi!"); 
        getchar();
        return ;
    }

    checkInt("introdu nr de linii mai mare ca 0 : ",n,0);
    checkInt("introdu nr de coloane mai mare ca 0 : ",m,0);

    *matrix = malloc(*n * sizeof **matrix);

    for(int i = 0;  i < *n; i++){
        (*matrix)[i] = malloc(*m * sizeof * (*matrix)[i]);
        for (int j = 0; j < *m; j++)
            (*matrix)[i][j] = 0;
    }

    printf("\nmemoria a fost alocata cu succes\n");

    while((*ch = getchar()) != '\n' && *ch != EOF);

    getchar();
}

void Manualinput(int *ch, int *n, int *m, int ***matrix){
    system("clear");

    if(warningMem(n,m))return;    

    int f;

    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++){
            do {
                printf("matrix[%d][%d] = ", i ,j);
                f = scanf("%d", &(*matrix)[i][j]);

                if(f == EOF)
                    exit(0);

                if (f != 1)
                    while((*ch = getchar()) != '\n' && *ch != EOF);

            }while(f != 1);
        }
    }

    printf("\nElementele au fost intrdouse cu succes!!!");

    while((*ch = getchar()) != '\n' && *ch != EOF);

    getchar();

}

void Autoinput(int *ch, int *n, int *m, int ***matrix){
    system("clear");

    if(warningMem(n,m))return;

    int max, min;

    printf("Intervale random! \n");

    checkInt("Min: ",&min,INT_MIN);
    checkInt("Max: ",&max,min);

    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++){
            (*matrix)[i][j] = rand()%(max - min) + min;
        }
    }

    printf("\nElementele au fost intrdouse cu succes!!!");

    while((*ch = getchar()) != '\n' && *ch != EOF);

    getchar();

}

void Sortcols(int *n, int *m,int ***matrix){
    system("clear");

    if(warningMem(n,m))return;

    for(int j = 0; j < *n; j++){
        for(int i = 0, temp = 0; i < *n - j - 1; i++){
            if((*matrix)[i][0] > (*matrix)[i+1][0]){
                temp = (*matrix)[i+1][0];
                (*matrix)[i+1][0] = (*matrix)[i][0];
                (*matrix)[i][0] = temp;
            }
            if((*matrix)[i][*m-1] > (*matrix)[i+1][*m-1]){
                temp = (*matrix)[i+1][*m-1];
                (*matrix)[i+1][*m-1] = (*matrix)[i][*m-1];
                (*matrix)[i][*m-1] = temp;
            }
        }
   }

    printf("Coloanele au fost sortate cu succes!!!");
    getchar();
}

void Show(int *n, int *m, int ***matrix){
    system("clear");
    printf("Matrix:\n\n");

    if(warningMem(n,m))return;

    for(int i = 0; i < *n; i++){
        for(int j = 0; j < *m; j++) printf("%4d ", (*matrix)[i][j]);
        printf("\n");
    }

    getchar();
}

void FreeMem(int *n, int *m, int ***matrix){
    system("clear");

    if(warningMem(n,m))return;

    for(int i = 0; i < *n; i++){
        free((*matrix)[i]);
    }

    free(*matrix);

    *matrix = NULL;
    *n = 0;
    *m = 0;

    printf("Memoria a fost eliberata cu succes!\n");

    getchar();
}

int main(){
    char choice; 

    int ch, m, n, **matrix = NULL;

    while(1){
        system("clear");

        printf("1.Aloca memorie pentru tablou bidimensional\n"
                "2.Introdu elemntele de la tastatura\n" 
                "3.Introdu valori aleatorii\n" 
                "4.Sorteaza prima si ultima coloana a tabloului\n"
                "5.Afiseaza elementele tabloului la ecran\n"
                "6.Eliberaza memoria alocata tabloului\n" 
                "0.Iesire din program\n\n");

        printf("choice: ");

        choice = getchar();

        while((ch = getchar()) != '\n' && ch != EOF);

        switch(choice){
            case '1':
                Allocatemem(&ch,&n,&m,&matrix);
                break;
            case '2':
                Manualinput(&ch,&n,&m,&matrix);
                break;
            case '3':
                Autoinput(&ch,&n,&m,&matrix);
                break;
            case '4':
                Sortcols(&n,&m,&matrix);
                break;
            case '5':
                Show(&n,&m,&matrix);
                break;
            case '6':
                FreeMem(&n,&m,&matrix);
                break;
            case '0':
                exit(0);
                break;
            default:
                printf("Invalid input");
                getchar();
        }

    }
}
