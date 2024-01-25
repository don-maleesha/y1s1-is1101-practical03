#include <stdio.h>

int main(){

    int number;
    int sum = 0;

    while (1)
    {
        printf("Enter a number : ");
        scanf("%d", &number);

        if (number < 0)
        {
            break;
        } 
        
        if (number >= 0)
        {
            sum = sum + number;
        }

    }
        
    printf("Sum = %d", sum);
    
    return 0;

}
       
