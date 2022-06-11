//🟢🔵🔴 Nested Loops ::

#include<stdio.h>
int main()
{


    //Nested For :: 

    int n;
    printf("Enter value of N = "); 
    scanf("%d", &n);

    for( int i = 1; i < n; i++)
    {
            for( int j = 1; j < n; j++){
                printf("* ");
            }
        printf("\n");
    }

    
    //Nested while :: 

    int i = 0, j = 1; 
    while ( i < 3)
    {
        while ( j <= 3)
        {
            printf("%d ", j++);
        }
        i++;
    }
    



    int i = 0, j = 1; 
    while ( i < 3)
    {
        while ( j <= 3)
        {

        }
        printf("%d %d", i++, j++); // Infinity Loops
    }
    

    
    // Nested do while : 

    int i = 1, j = 3; 
    do
    {
       do
        {
           printf("%d ", j);
           j--;

        } while ( j > 0);
        i++;  

        printf("%d ", i);     

    } while ( i < 4 );
    


    int i = 1, j = 3; 
    do
    {
       do
        {
           printf("%d ", --j);

        } while ( j > 0);

        printf("%d ", i++);  
           
    } while ( i < 4 );




   //🏆 Print A - Z like this : I created this program 🥰
   /*
    A       B       C       D

    E       F       G       H

    I       J       K       L

    M       N       O       P

    Q       R       S       T

    U       V       W       X

    Y       Z
    */


    char ch = 'A';
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c\t", ch);

            if( ch >= 'Z')
               break;

            ch++;
        }
        printf("\n\n");  
    }


    return 0;
}

