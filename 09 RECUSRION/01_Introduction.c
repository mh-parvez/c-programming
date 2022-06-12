//🟢🔵🔴 Recursion :: When a funciton call itself directly or indirectly that things or prossess is called recursion.

#include<stdio.h>


void display(int n){
    if( n < 1)
      return;
    else
    {
        //printf("%i ", n); // 3 2 1
        display(n - 1);
        printf("%i \n", n); // 1 2 3
    }
} 


char alphabet(char ch)
{
    if(ch <= 'A' - 1)
    {
        return -1;
    }
    else
    {   
        alphabet( ch - 1);
        printf("%c ", ch);
        
    }
}


int main(){
    
    int n = 5; 
    display(n);

    int ch = 'Z'; 
    alphabet(ch);

}
