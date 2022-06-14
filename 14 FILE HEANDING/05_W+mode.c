//🟢🔵🔴 w+ mode : writing and reading, if file exist, it will over-right the previous documnet. Or not exist it will be create a new file


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE * fp = NULL;
    char ch;

    fp = fopen("abc.txt", "w+");

    if(fp == NULL)
    {
        printf("Can't read the file");
        exit(1);
    }

    fputs("Jaman Hasan Kbair ", fp);

    rewind(fp); // reverse the cursour

    while (!feof(fp)) //if we use w+ mode, cursour move on end of the file, thats we use rewind() function, otherways we don't get the data in console screen. 
    {
       ch = fgetc(fp);
       printf("%c", ch);
    }

    fclose(fp);

    return 0;
}