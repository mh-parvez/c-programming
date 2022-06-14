//🟢🔵🔴 Write Mode : if file exist, it will over-right the previous documnet. Or not exist it will be create a new file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("abc.txt", "w");

    if (fp == NULL)
    {
        printf("error");
        exit(1); 
    }


    // char ch = 'a';
    // char str[30] = "Leading University"; 
    // char str[30]; 
    char str2[30];
    int a = 100;


    //1-Single Charcter:
    // fputc(ch, fp);
    // fputc('b', fp);


    //2-Stirng:
    // fputs(str, fp);
    // fputs("Jaman Hasan", fp);


    //3-Write string useing, fputc:
    // for (int i = 0; i != strlen(str); i++)
    //     putc(str[i],fp);
    

    //4-Mix data, Formatted Output:
    // fprintf(fp, "%s = %d", str, a);


    //5-Input form the User:
    printf("Enter Your Name : ");
    gets(str2);
    fputs(str2, fp);

    fclose(fp);

    

    return 0;

}
