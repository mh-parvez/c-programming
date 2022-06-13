#include<stdio.h>
#include<string.h>

int main()
{

    //01_Libray Function:
    //------------------
    char name[20] = "jannat";
    // strrev(name);
    // printf("%s", name);


    //02_Without Libary Function:
    //--------------------------
    int temp;
    int len = strlen(name);

    // for( int i = 0; i < len / 2; i++)
    // {
    //     temp = name[i];
    //     name[i] = name[len - 1 - i]; 
    //     name[len - 1 - i] = temp;
    // }


    for( int i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
    printf("%s", name);
    
    return 0;
}