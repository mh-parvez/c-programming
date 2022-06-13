//🎯 Program to Print Sum of Indivisual Marix:

/*
    0,0     0,1     0,2  sum

    1,0     1,1     1,2  sum

    2,0     2,1     2,2  sum
    sum     sum     sum
*/

#include <stdio.h>

int main()
{

   int the_matrix[3][3];
   int i, j, sum_row, sum_col;

   printf("Enter the Matrix Value : \n");

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &the_matrix[i][j]);
      }
   }

   printf("\n");
   printf("The Matrix:\n");
   printf("-----------\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         printf("%d \t", the_matrix[i][j]);
      }
      printf("\n");
   }

   printf("\n");
   printf("The Sum Row and Column:\n");
   printf("-----------\n");
   for (i = 0; i < 3; i++)
   {
      sum_col = sum_row = 0;

      for (j = 0; j < 3; j++)
      {
         sum_row += the_matrix[i][j];
         sum_col += the_matrix[j][i];
      }
      printf("Sum_Row %i \t Sum_Col %i \n", sum_row, sum_col);
   }

   printf("\n\n\n");
   return 0;
}