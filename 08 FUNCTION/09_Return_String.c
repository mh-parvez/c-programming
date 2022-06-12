//🟢🔵🔴 Return String : 


#include<stdio.h>

// const char * display() //for case no 5

char * display() // base address geting thats way we use * function..
{
    // 01_Read only memory and We can't modefiy this
    // return "Jaman"; 

    // 02_ Stack Memory / Local Variable. if the funciton will be exe, then the memory will vanish and its return NULL
    // char str[] = "Jannat"; 
    // return str;

    // 03_Global memory location, we can modify this things also.
    // static char str[] = "Jannat jaman kabir";  
    // return str;

    // 04_Read only memory and We can't modefiy this
    // char * str = "Jannat jaman kabir"; 
    // return str;

    // 05_Read only memory and We can't modefiy this
    // const char * str = "jannat jaman kabir"; 
    // return str;

}

void main()
{
    char * str;
    //const char * str; //for case 05

    str = display(); 

    // str[0] = 'Z';  // check the permission, modify or not 

    printf("Name : %s", str);
}



