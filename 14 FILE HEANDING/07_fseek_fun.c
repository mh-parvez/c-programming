//🟢🔵🔴 fseek(file_pointer, -+offset, position) : cursour moveing 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    char read;
    fp  = fopen("abc.txt","r+");

    if (fp == NULL)
    {
        printf("File is not exist");
        exit(1);
    }

    // fseek(fp, 6, SEEK_SET);
    // fputs("-New_Update-", fp);

    // fseek(fp, 6, SEEK_SET);
    // read = fgetc(fp);
    // printf("%c\n", read);

    // fseek(fp, -4, SEEK_CUR);
    // read = fgetc(fp);
    // printf("%c\n", read);

    // fseek(fp, -6, SEEK_END);
    // read = fgetc(fp);
    // printf("%c\n", read);

    fclose(fp);

    return 0;
}

