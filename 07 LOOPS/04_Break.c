//🟢🔵🔴 Break : break or stop the loop based on some conditon

#include<stdio.h>
int main()
{


   //🏆 Infinity Sum, if we input then loop will be stop, and print the whole number of sum. 

   int a,  sum = 0; 
   printf("Enter 0 then you will stop \n");

   while (1)
   {
       printf("Enter an Interger Number = "); 
       scanf("%i", &a); 

       if( a <= 0)
          break;
       sum += a; 
       
   }
   printf("Sum = %i", sum);




    /* 
    int a, i, sum = 0;

    for( i = 0; i < 5; i++){
        printf("Enter a Number = ");
        scanf("%i", &a);

        if( a <= 0 )
           break;

        sum += a; 
    }
    printf("Sum = %i", sum);

    */



   return 0;

}
