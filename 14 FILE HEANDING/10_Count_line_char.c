//🎯 How many Chacter & line in a file ? 

#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *fp = NULL;
    fp  = fopen("emoloyee.txt","r+");
    if (fp == NULL)
    {
        printf("File is not exist");
        exit(1);
    }


    char read;
    int char_num = 0;
    int line_num = 1;

    while ((read = fgetc(fp)) != EOF)
    {
        char_num++;
        if(read == '\n'){
          line_num++;
        }
    }
    
    printf("Line Number %i\n", line_num);
    printf("Charcter Number %i\n", char_num);

    fclose(fp);

    return 0;
}

