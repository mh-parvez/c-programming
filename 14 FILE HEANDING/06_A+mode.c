//🟢🔵🔴 A+ mode : appending and reading

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    char read;
    fp  = fopen("abc.txt","a+");

    if (fp == NULL)
    {
        printf("File is not exist");
        exit(1);
    }

    fputs(". He is good", fp);

    rewind(fp);  // fputs(". He is good", fp); // when i write this line before the loop, that time we use rewind funciton, cause cursor move on last after apadding. So we need to rewind the cursour.
    

    while (!feof(fp))
    {
        read = fgetc(fp);
        printf("%c", read);
    }
    
    fclose(fp);

    return 0;
}

