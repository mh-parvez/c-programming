//🟢🔵🔴 R+ mode : reading and writing , but not create new file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    char str[230];

    fp = fopen("abc.txt", "r+");

    if (fp == NULL)
    {
        printf("error");
        exit(1);
    }


    // Write last of the file: cursour gone be last 
    // -----------------------
    while (!feof(fp))
    {
       ch = fgetc(fp);
       printf("%c", ch);
    }
  
    
    // fgets(str,10,fp);
    // printf("%s", str);


    fputs("THE LIST: ", fp);
    fputs("999 ", fp);
    fputs("Bal ", fp);

    fclose(fp);

    return 0;
}