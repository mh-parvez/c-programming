#include<stdio.h>

void main()
{
    printf("DATE : %s\n", __DATE__);
    printf("TIME : %s\n", __TIMESTAMP__);
    printf("TIME : %s\n", __TIME__);
    printf("FILE : %s\n", __FILE__);
    printf("LINE : %d\n", __LINE__); //WHICH NUMBER LINE IN THIS CODE
    printf("ANSI : %d\n", __STDC__);

}

// C:\WINDOWS\System32\cmd.exe