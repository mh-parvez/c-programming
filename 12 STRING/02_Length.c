#include<stdio.h>
#include<string.h>

int main()
{
    //01_Libray Function:
    //-------------------

    // char name[30];
    // int count = 0;
    // printf("Enter Your Name: ");

    // gets(name); 
    // count  = strlen(name);

    // printf("String : %i", strlen(name));
    // printf("String Length: %i", count);


    //01_Without Libary Function:
    //---------------------------
     char name[30];
     int i = 0, count = 0;

     printf("Enter Your Name: ");
     gets(name); 
    
    int counter = 0;
    while (name[counter] != '\0')
    {
        counter++;
    }
    printf("\n lenght : %i", counter);



    return 0;
}