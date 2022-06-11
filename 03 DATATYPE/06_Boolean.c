//🟢🔵🔴 There is no boolean data type in C program, #include<stdbool.h> for boolen value. this is custom data type in C not primary.

#include<stdio.h>
#include<conio.h>
#include<stdbool.h> // for boolen value

int main(){

    // short is_logged_in = 0;
    bool is_logged_in = true; 

    if(is_logged_in){

        printf("\n\nUser Logged In \n");
    }else{
        
        printf("\n\nUser Logged Out\n"); 
    }

    getch();

}