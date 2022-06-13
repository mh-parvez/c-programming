//🎯 Matrix Multipication : 

#include<stdio.h>
#define N 50 //For array size
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q; 
    
    printf("Enter the Size of First Matrix:\n"); 
    scanf("%i %i", &m, &n); 
    printf("Enter the Size of Second Matrix:\n");
    scanf("%i %i", &p, &q);

    printf("Size:\n\n");
   
    if (n != p)
    {
        printf("Not Multiplay This (n != p)\n");

    }else{

        printf("1st Matrix Size = %i * %i\n", m, n);
        printf("2nd Matrix Size = %i * %i\n\n", p, q);

 
    printf("Enter The 1st Matrix Value:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%i", &a[i][j]);
        }
    }

    printf("Enter The 2nd Matrix Value:\n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            scanf("%i", &b[i][j]);
        }
    }

    printf("\n");

    //First Matrix :
    printf("1st Matrix Value:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%i \t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Second Matrix:
    printf("2nd Matrix Value:\n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%i \t", b[i][j]);
        }
        printf("\n");
    }

   //Multipication : 
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            sum = 0; 
            for ( k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
 
    printf("\n");

    //New Matrix : 
    printf("The New Matrix: \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%i \t", c[i][j]);
        }
        printf("\n");
    }
    
    }

    printf("\n");
    printf("\n");

    return 0;
}


