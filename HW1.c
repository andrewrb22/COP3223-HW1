//Answer to question 1 
//It’s 
// ormal to        ake C! 1o you like it!
//----------------------------------
//Answer to question 2 
// 3 , 0.00 , 1.50 , 1 2 
//----------------------------------
//Answer to question 3 
// $  36
//----------------------------------
//Answer to question 4 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    float km;
    printf("Enter your distance in Miles: ");
    scanf("%f", &m);
    km = 1.609 * m;
    printf("Thank you! %f\n", m, "Miles =", km, "Kilometers"  );

    return 0;
}