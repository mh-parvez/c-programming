//🟢🔵🔴 Read mode : Just read the file. not create new file, we need to catch the value, for copying file data, so we can use here varible, for contain the data.. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fp = NULL;
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }


    char ch;
    char str[230];


    // 01.first charcter only read
    //  ch = fgetc(fp);
    //  printf("%c", ch);


    // 02.String or line reading
    //  fgets(str, 5, fp); // only 4 char
    //  fgets(str, 45, fp); // a complete line
    //  printf("%s", str);


    // 03. read full file using fgetc()
     while (!feof(fp))
     {
        ch = fgetc(fp);
        printf("%c", ch);
     }


    // 04. read full file using fgets()
    // while (!feof(fp))
    // {
    //     fgets(str, 156, fp); // a complete file
    //     printf("%s", str);
    // }


    fclose(fp);

    return 0;

} 