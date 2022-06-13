#include<stdio.h>
#include<string.h>

int main()
{

    //01_Libray Function:
    //-------------------
    // char name[20] = "JanNat";
    // strupr(name);
    // printf("%s\n", name);
    // strlwr(name);
    // printf("%s", name);


    //02_Without Libary Function:
    //---------------------------

    char name[20] = "Jaman"; 

    // Upper to Lower
    // for(int i = 0; name[i] != '\0'; i++)
    // {
    //     if(name[i] >= 'A' && name[i] <= 'Z')
    //         name[i] += 32;
    // }


    //Lower to Upper
    // for(int i = 0; name[i] != '\0'; i++)
    // {
    //     if(name[i] >= 'a' && name[i] <= 'z')
    //         name[i] -= 32;
    // }

    // printf("%s", name);


    return 0;
}