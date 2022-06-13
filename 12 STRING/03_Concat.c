#include<stdio.h>
#include<string.h>

int main()
{
    //01_Libray Function:
    //-------------------

    char fname[20]; 
    char lname[20];

    printf("Enter Your First Name: \n");
    gets(fname);
    printf("Enter Your Second Name: \n");
    gets(lname);

    // strcat(destination, source);
    // strcat(fname, lname);
    // printf("Full Name: %s ", fname);

    //Warnnig! buffer overflow problem.


    //02_Without Libary Function:
    //--------------------------
    int len1, len2;

    len1 = strlen(fname);
    len2 = strlen(lname);

    for (int i = 0; i < len2; i++)
    {
       fname[len1 + i] = lname[i];
    }

    printf("%s \n ", fname); 




    //strncat(str1, str2, num_of_charcter); 
    strncat(fname, lname, 3); 
    printf("%s ", fname); 
    

    return 0;
}