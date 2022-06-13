//🟢🔵🔴 2D Array :

#include<stdio.h>
int main()
{
 

    // Data_Type name_array[row_size][col_size];
    int marks[3][5];
    float marks[3][5];
    int marks[5][5];
    printf(" Size = %i ", sizeof(marks));


    //🎯 Initialization::

    // 01
    int a[2][3] = { {1,0,2}, {3,2,6} };

    // 02
    int b[2][3] = { 

        {1,0,2}, 
        {3,2,6} 
    };

    // 03
    int a[ ][3] = { {1,0,2}, {3,2,6} };

    // 04
    int a[2][3] = { {1,0}, {2,0} }; //remaing value are 0 

    // 05
    int a[2][3] = {0}; //remaing value are 0 

    // 06
    int a[2][3] = {0}; // like 1D array, karon amara jani na 2row ase kina,   

    // 07
    int a[2][3] = {{0,0,0}}; //remaing value are 0 


    // task:: find error or not
    int a[2][3] = {0, 1, 2}; 
    int a[2][3] = {0, 1, 2, 2}; 


    
    //🎯 Run Time::

    int arr[2][3];

    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
           scanf("%d", a[i][j]);
       }
    }

   
    
    // Accessing of Element : 
    // name[index_of_row_element][index_of_column_element]
    int a[2][3] = { {1,2,3}, {4,5,6} };

    printf("value = %i \n", a[0][2]); //3
    printf("value = %i \n", a[1][1]); //5
    

    return 0;
}