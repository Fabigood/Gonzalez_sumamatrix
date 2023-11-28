#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n, m;
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);

    int Matrix[n][m];
    


    for (int i = 0; i < n; i++)
    {           //for para imprimir la matrix  
        printf("\n");

        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 100 + 1;        //agregamos para tener numeros randoms

            printf("%d\t", Matrix[i][j]);
        }
    }

         srand(time(NULL));
    int p, q;
        printf("\n");
    printf("Ingrese el numero para filas segunda matrix  \n");
    scanf("%d", &p); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de columnas  \n");
    scanf("%d", &q);

    int Matrix2[p][q];

    for (int i = 0; i < p; i++)
    {           //for para imprimir la matrix  
        printf("\n");

        for (int j = 0; j < q; j++)
        {
            Matrix2[i][j] = rand() % 100 + 1;        //agregamos para tener numeros randoms

            printf("%d\t", Matrix2[i][j]);
        }
    }
    int matrixre[n][m];
     printf("\nResultado de la suma de las matrices:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            matrixre[i][j] = Matrix[i][j] + Matrix2[i][j];
            printf("%d\t", matrixre[i][j]);

        }
       }
        return 0;
    }
    