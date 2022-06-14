#include <stdio.h>
#define A 10
#define MASSAGE "This is just a massage"
#define SUB(a, b) a - b
#define MUL(a, b) a * b

#define MAX(a,b) if(a > b)\ 
                  printf("%d is max\n",a);\ 
                  else\
                  printf("%d is max\n",b);

int main()
{
    printf("A = %d\n", A);
    printf("A = %d\n", A + 30);

    printf("%s\n", MASSAGE , printf(" Jaman "));
    printf("%s\n", MASSAGE + printf(" Jaman "));

    printf("SUB = %d\n", SUB(70,10));
    printf("MUL = %d\n", MUL(5 - 2, 7 + 4)); // multi first = 5-2 * 7+4 = 5 - 14 + 4 = -5

    MAX(10,20);

    // #undef MAX 👉 define marcos covert into undefine

    // MAX(50,20);

    return 0;
}


