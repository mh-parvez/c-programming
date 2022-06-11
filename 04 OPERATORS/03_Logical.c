//🟢🔵🔴 Logical Operator :  if you ans the whole of program, you are the Boss 👊 first of all dry the the program

/* 
👉 precidence =  !  then  &&  then  ||

Logical And:: 
------------
A      -  B      -  Result
true   -  true   -  true
true   -  false  -  false
false  -  true   -  false
false  -  false  -  false 



Logical Or::
-----------
A      -   B      -  Result
true   -   true   -  true
true   -   false  -  true
false  -   true   -  true
false  -   false  -  false



Logical Not:: 
-----------
A     -  Result
true  -  false
false -  true   

*/


#include<stdio.h>
#include<stdbool.h>

void main()
{  


    bool has_nid = false;
    bool has_passprot = true;
    bool is_adult = true;

    bool has_identity = has_nid || has_passprot ;           
    bool is_permitted = has_identity && is_adult;  
    
    printf("Indentity - %d\n", has_identity);
    printf("Permitted - %d\n",  is_permitted);      
    printf("Permitted - %d\n", !is_permitted);   

    
    //😋 We can also write this way : 
    // bool is_permitted2 = (has_nid || has_passprot) && is_adult;   
    // bool is_permitted3 = !((has_nid || has_passprot) && is_adult); 

    // printf("Permitted - %d\n",  is_permitted);      
    // printf("Permitted - %d\n", !is_permitted); 




    //😋 We can also write this way :

    // int a = 20, b = 30, result;
    // result = a < b && printf("Jaman");  // 1 && 1 = 1

    // printf(" %d \n", result);
    // printf(" %d \n", !result);



    
    int an = 20, bn = 30, result;
    result = an > bn && printf("Jaman") || printf("Kabir");  
    // Are you confiugdd 😂😂 let me expline : a > b && printf("Jaman") 👉 0 && 1 👉 0 || printf("Kabir") 👉 0 || 1 = 1  😋 Ans : kabir 1
    printf(" %d \n\n", result);




    int result1 = 4 && 0; // precidence - ! -> && -> ||  
    int result2 = 4 && !0;
    printf("The Value -> %d \n", result1); 
    printf("The Value -> %d \n", result2); 



   //✌ find when a_num are changed, Stop !! don't run, first of all guess the output, then check the output

    int a_num = 10, b_num = 20, jug;
    // a_num < b_num && a_num++;
    // a_num < b_num || a_num++;
    a_num > b_num || a_num++;

    printf("a_num = %i \n\n", a_num); 




    int  a = 1, b = 6;

    // a-- && ++b;
    --a && ++b; //not execute ++b cause its before value already false for && operation  = 0 && ++b =  0

    printf("a = %i \n", a); 
    printf("b = %i \n\n", b); 

    printf("a = %i \n", a-- && ++b);
    printf("a = %i \n", a-- && ++b);


    // int a  = 30;
    // int logical = a > 30 || !0 && printf("I don't know ?");
    // printf("\n%d", logical);



}

