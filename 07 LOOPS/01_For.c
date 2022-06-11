//🟢🔵🔴 For in loop :: lots of loops here uncomment one by one then cheak the output

#include<stdio.h>

int main()
{

    // for(int i = 0; i < 10; i++)
    // printf("Hello, Jaman\n");


    // for(int i = 1; i <= 10; i++)
    // printf("%i \t", i);



    //🎯 Initalization: 
    // ----------------

    int i = 1; 
    for( ; i <= 5; i++)
    printf("%i ", i);


    for(int i = 1, j = 0; i <= 5; i++, j++)
    printf("%i %i \n", i, j);


    for(int i , j = 0; i <= 5; i++) //not run, cause i intital point not here
    printf("%i %i \n", i, j);




    //🎯 Condition: 
    //-------------
    
    for(int i = 10; i == 10; i++)
    printf("%i\n", i);
 

    int i, j;
    for(i = 1, j = 0; i < 100, j < 3; i++, j++){
        printf("%i %i\n", i, j); 
    }


    int i, j;
    for(i = 1, j = 0; i < 100 && j < 3; i++, j++){
        printf("%i %i\n", i, j); 
    }

    
    // 🏆 Add 0 first 9 numbers like 01 02 03 04
    int i, j;
    for(i = 1, j = 1; i < 10 || j < 10; i++, j++){

        if(i < 10 && j < 10)
        {
          printf("%02i - %02i \n", i, j);  
        }
        else{
          printf("%i - %i \n", i, j); 
        }
    }




    //🎯 Increment or Dicrement: 
    // -------------------------

    int i = 1, j = 1; 
    for( ; i < 10, j < 3; ){ //last conditon difine the loop exe time
        printf("%i %i\n", i, j); // 1 1 2 2 
        i++;
        j++;
    }


    int i = 1, j = 1; 
    for( ; i < 10, j < 6; ){
        printf("%i %i\n", i, j); 
        j++; //Beacuse it's depend on last Condition 
    }


    int i = 10; 
    for( ;i > 0; ){
        printf("%i \n", i); 
        i--;
    }



    //🎯 Other's metters :
    // -------------------

    int a = 5, b = 10;  
    for(int i = a + b ; i <= 50; i++)
    printf("%i\n", i);


    int a = 5, b = 10;  
    for(int i = a + b ; i <= 50; i = i + a)
    printf("%i\n", i);


    int a = 5, b = 10;  
    for(int i = a + b ; i <= 50; i = i / 2) //not running
    printf("%i\n", i);


    //LOVE INFINITY TIMES 😂 Useing infinity for loop
    for( ; ; ){
    printf("my lecture"); //Infinity
    }


    //🏆 Multipication number table:
    int num, table;
    printf("Enter Number = " ); 
    scanf("%i", &num);

    for(int i = 1; i <= 10; i++)
        printf("%i * %i = %i \n", num, i, num * i); 
       
    

    return 0;

}