#include <stdio.h>


int main() {
    int num;
    int total = 0;
    int product = 1;
    int total_even = 0; 
    for (int i = 1; i < 6; i++){
        printf("Enter a number: ");
        scanf("%d", &num);
            if (num <= 0){
                printf("You entered a negative integer please enter a positive number\n");
                i--;
            }

            
            if (num%2 == 0){
                total += num;
                product *= num;
                total_even = 1;
            }
            
    }
    
    if (total_even>0){
        printf("The sum of your number is: ");
        printf("%d\n", total);
        
        printf("The product of your number is: ");
        printf("%d\n", product);
    }
    else {
        printf("Error the are no even numbers provided");
    }
}
