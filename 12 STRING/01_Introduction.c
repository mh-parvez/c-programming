#include<stdio.h>

int main()
{
    //🎯 Decleration:: 


    //👉01_Complie Time: char string_name[size_of_string]

    //valid ✔ 
    char name[15];
    char name[15] = "Jenny";
    char name[15] = { 'j', 'e', 'n', 'n', 'y', '\0'};
    char name[ ] = { 'j', 'e', 'n', 'n', 'y', '\0'};
    char name[ ] = { 'j', 'e', 'n', 'n', 'y', '\0'};

    char name[ ] = "jenny lecture";
    char name[ ] = { 'j', 'e', 'n', 'n', 'y', ' ', 'c', '\0'};

    //invalid ❌ 
    char name[10] = "Mehedi Hasan Parvez"; //error, size over

    char name[10];
         name = "jaman"; 



    //👉 02_At Run Time: scanf(), gets()

    char name[30];
    printf("Enter Your Name: ");

    scanf("%s", name); // Only Print First Word, beacause scanf not consider whitespace.
    scanf("%5s", name); // Only get 5 charcter

    gets(name); // print full line of string

    printf("%s\n", name);  
    printf("%.4s", name); // specific word



    //Print String:: printf(), puts()
    //============
    printf("%s\n", name);  
    printf("%.4s\n", name); // specific word
    printf("%10.4s\n", name); // extra white-space(left_side)
    printf("% -10.4s lol \n", name); // extra white-space(right-side)

    puts(name); //Auto genarate new line
    puts(name);

    printf("%s\n", &name);
    printf("%s\n", &name[2]); //remove first 2 letter
    printf("%s\n", name[]); //error
    

    char fname[20], lname[20];
    printf("Enter the first & last name: ");
    scanf("%s %s", fname, lname);
    printf("%s %s", fname, lname);

    return 0;
}