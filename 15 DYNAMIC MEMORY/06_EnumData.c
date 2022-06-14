#include<stdio.h>

int main()
{

    /*enum week_days {sun, mon, tue, wed, thus, fri};

    // enum week_days {sun = 1, mon, tue, wed, thus, fri};
    // enum week_days {sun = 1, mon = 1, tue, wed, thus, fri};
    // enum week_days {sun = 1, mon = 5, tue, wed, thus, fri};
    // enum week_days {sun = 1, mon = 3.2, tue, wed, thus, fri};

    // enum week_days {sun, fri}; //error
    // enum week_days {satur}; //error

    enum week_days today, nextday;
    today = sun;
    nextday = mon;

    printf("%d\n", today);
    printf("%d\n", nextday);*/


    enum alldays{saturday, week_days}; // this is also fine



    //$$$ Example ::
    enum week_days {stur, sun, mon, tue, wed, thu, fri};

    enum week_days today;
    // printf("Enter a num 0 - 6 : \n");
    // scanf("%d", &today);

    switch (today)
    {
    case stur:
        printf("Saturday");
        break;
    case sun:
        printf("Sunday");
        break;
    case mon:
        printf("Monday");
        break;
    }





    //$$$ Example :: type like this, and this program not be curret, i write this idea perpose only.

    // enum gender {male, female, child};

    // enum gender cus_male = male;
    // enum gender cus_female = female;
    // enum gender cus_child = child;

    // if(cus_male == male)
    //    printf("50 Percent Discount");

    // if(cus_female == female)
    //    printf("50 Percent Discount");

    // if(cus_child == child)
    //    printf("50 Percent Discount");





    //$$$ Example :: how to use typedef in enum 
    
    //enum gender {male, female, child}; 4,4,4 bytes


    typedef enum {male, female, child} gender;
    
            gender customer;
            printf("Enter the Any Key\n0 for male\n1 for female\n2 for child\n : ");

            scanf ("%d", &customer);

            if(customer == male && customer < 3)
            {
                printf("male - 10 Percent Discount");
            }
            else if(customer == female)
            {
                printf("female -20 Percent Discount");
            }
            else if(customer == child)
            {
                printf("child - 15 Percent Discount");
            }
            else
            {
                printf("Enter valid key");
            }

    return 0;
}

