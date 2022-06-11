//🟢🔵🔴 Size of : Yes !! sizeof is also a operator, it's unary operator 

#include<stdio.h>

int main(){


    

     printf("int = %d\n",  sizeof(int));

     char ch = "a";
     printf("char = %d\n",  sizeof(ch));

     short sh = "a";
     printf("short = %d\n",  sizeof(sh));

     printf("long = %d\n",  sizeof(long));
     printf("long long = %d\n",  sizeof(long long));
     printf("float = %d\n",  sizeof(float));


    //😂 Time to Brain Wash 😁 : guess the output
     int a = 33;
     int b = 25;
     int result = a > b ? 1 : 0;
     printf("The Result = %d\n",  sizeof(result));


    return 0;

}