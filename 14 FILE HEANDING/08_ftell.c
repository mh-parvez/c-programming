//🟢🔵🔴 ftell(file_pointer) : tell the postion of cursour

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    char read;
    int postion;
    char read_line[50];

    fp  = fopen("emoloyee.txt","r+");

    if (fp == NULL)
    {
        printf("File is not exist");
        exit(1);
    }

    // postion = ftell(fp);
    // printf("%d\n",postion);

    // fseek(fp, 15, SEEK_SET);
    // printf("%d\n", ftell(fp));

    // read = fgetc(fp);
    // printf("%c \n", read);
    // printf("%d\n", ftell(fp));

    // fscanf(fp, "%s", read_line);
    // printf("%s\n", read_line);
    // printf("%d\n", ftell(fp));

    //file of the length : 
    fseek(fp, 0, SEEK_END);
    printf("%d", ftell(fp));



    fclose(fp);

    return 0;
}

