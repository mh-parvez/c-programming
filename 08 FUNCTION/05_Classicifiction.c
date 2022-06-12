//🟢🔵🔴 Classificiton of the function ::

#include<stdio.h>


//🎯01_No Argumnet Without Return Type:: --->
/*
void sum(void); 

int main()
{ 
    sum();    
}

 
void sum(void) //or, void sum() 
{
    int a = 5, b = 3, sum = 0;  
    sum = a + b; 
    printf("Sum = %d\n", sum);
}
*/




//🎯02_No Argumnet With Return Type:: --->
/*
int sum(void); //return_type integer here
char c(void);  //return_type charcter here

int main()
{

    printf("Charcter = %c", c()); //function call and print 
    printf("Sum = %d \n", sum()); //function call and print 

    return 0;
}


char c()
{   
    return 'a';
}


int sum()
{
    int a = 5, b = 10; 
    return a + b; // or👉 return 10 + 30; or👉 return a + 10; or👉 return a,10,b ; // b will be printed
    printf("After return"); // unrechable code, this is not execute, cause return keyword before the line.
}
*/





//🎯03_With Argumnet NO Return Type:: ---> declertion (returntype, name, datatype) and definition (returntype, name, datatype)  are same

/*
float sum(float, float); // tyeps of agrument are float data type

int main()
{ 
    sum(2.3,4); 
    sum(2.3,4, 44.3); // error, to much agrument
    sum(2.3); // error, one agrument missing
}

float sum(float a, float b) // definition
{
    printf("Sum  = %f\n", a + b);
}
*/





//🎯04_With Argumnet Wih Return Type:: --->

int sum(int, int); 
int max_min(int, int);


int main()
{ 
    int theSum      = sum(4,3);
    printf("The Sum = %d\n", theSum); 

    char cheaking   = max_min(99,100);
    printf("%s", cheaking);
}

int sum(int a, int b)
{
    return a+b;
}


int max_min(int a, int b)
{
    
    // if( a > b)  //Useing if else condition : 
    // {
    //    return printf("A is Greater");
    // }
    // else
    // {
    //    return printf("B is Greater"); 
    // }

    return a > b ? printf("A is Greater") : printf("B is Greater"); //Useing Ternary operator :
}




