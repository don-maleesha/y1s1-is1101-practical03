#include <stdio.h>

int main(){

    int i, year;

    printf("Enter the year to check - ");
    scanf("%d", &year);

    if (((year % 4 == 0 ) && (year % 100 != 0)) || (year % 400 == 0 ))
    {
        printf("It is a leap year.\n");

    } else
    {
        printf("It is not a leap year.\n");

    }
    
    return 0;
    
}