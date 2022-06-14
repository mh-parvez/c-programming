//🎯 How many Chacter & line in a file...? 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = NULL;
    FILE *fp2 = NULL;
    char read;
    char read2;


    fp  = fopen("emoloyee.txt","r");
    if (fp == NULL)
    {
        printf("File doesn't exist");
        exit(1);
    }


    fp2  = fopen("copy.txt","w+");
    if (fp2 == NULL)
    {
        printf("File doesn't exist");
        exit(1);
    }



    while(read = fgetc(fp) != EOF)
    {
        fputc(read, fp2);
    }


    rewind(fp2);

    while(!feof(fp2))
    {
        read2 = fgetc(fp2);
        printf("%c", read2);
    }
    

    printf("Successfully Copied");

    fclose(fp);
    fclose(fp2);

    return 0;
}

