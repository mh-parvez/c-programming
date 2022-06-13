#include<stdio.h>
#include<string.h>

int main()
{
    // C compare two string with lexical rolls

    //01_Libray Function:
    //-------------------
    // int value;

    // char fname[] = "Jaman";
    // char lname[] = "Jaman";

    // value = strcmp(fname, lname); 
    // printf("The Value = %i\n", value);

    // if(value == 0)
    // if(strcmp(fname, lname) == 0) // another way
    //     printf("They are Equal\n");
    // else
    //     printf("Not same\n");




    //02_Without Libary Function:
    //--------------------------

    char fname[15] = "J";
    char lname[15] = "J ";
    int check = 0;

    //short cheaker = strcmp(fname, lname) ? printf("Not Same") : printf("Same");

    int cheak = 0;
    for (int i = 0; fname[i] != '\0' || lname[i] != '\0'; i++)
    {
        if (fname[i] != lname[i])
        {
            check = 1;
            break;
        }  
    }
    short result = check == 1 ? printf("Not Same") : printf("Same");


    return 0;
}