

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    char read;

    fp  = fopen("emoloyee.txt","r+");

    if (fp == NULL)
    {
        printf("File is not exist");
        exit(1);
    }

    // fseek(fp, 6, SEEK_SET);
    // while (!feof(fp))
    // {
    //     read = fgetc(fp);
    //     printf("%c", read);
    // }
    
    rewind(fp);

    printf("\n");

    while (!feof(fp))
    {
        read = fgetc(fp);
        printf("%c", read);
    }

    fclose(fp);

    return 0;
}

