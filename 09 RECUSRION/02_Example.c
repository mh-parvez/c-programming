#include<stdio.h>

// 1 + 2 + 3 + 4 + 5..... + n = sum 

int sum(int x){

    int s = 0;
    
    if( x == 1)
    {
       return x;
    }
    else
    {       
       s = x + sum(x - 1);
      return s;
    }
}

void main(){
   int a = sum(10);
   printf("Sum : %d", a);
}

