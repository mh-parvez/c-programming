//🟢🔵🔴 Append mode :  if file exist, it will  append data in the previous documnet. Or not exist it will be create a new file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    FILE *fp = NULL;
    fp = fopen("emoloyee.txt", "a");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }


    int id, age;
    char name[25]; 
    char profession[30];

    
    printf("Enter the Informaion of Employee : \n\n");

    printf("Enter The 8 Char ID : ");
    scanf("%i", &id);

    printf("Enter The Name : ");
    scanf("%s", name);

    printf("Enter Age : ");
    scanf("%i", &age);

    printf("Enter The Profession : ");
    scanf("%s", profession);

    fprintf(fp, "\nEmpolyee %i \n------------------\nName : %s\nAge : %i\nProfession : %s\n", id, name, age, profession);

    printf("Successfully Appended");


    fclose(fp);

    return 0;
}