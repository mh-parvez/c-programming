//🟢🔵🔴 While loop ::  lots of loops here uncomment one by one then cheak the output

#include<stdio.h>
int main()
{

    int i = 0;
    while (i <= 10)
    {
        printf("%i ", i);
        i++;
    }



    int i = 0;

    // while (i <= 10)
    // while (i < 1)
    // while (1) // infinity
    // while (i == 1)
    // while (i != 1)
    // while (i != 1)
    {
        printf("%i ", i);
        i++;
    }  




    // int i = 1; 

    while (i)
    // while (i++)
    // while (++i)
    {
        printf("%i ", i);
        i++;
    }


    //🏆 print A to Z :

    char ch = 'A';
    while (ch)
    {
        printf("%c\t", ch);

        if( ch == 'Z')
           break;
        ch++;
    }
    
    //ch -- , --ch -> They Are Both Same 
    
    return 0; 
}


