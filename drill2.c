#include <stdio.h>

int main() {
    float floaties [4];
    float num;
    float total = 0;
    float average = 0;
    
    for (int i = 0; i < 4; i++){
        printf("Enter a float: ");
        scanf("%f", &num);
        total += num;
        average = total / 4;
        floaties[i] = num;
    }
    printf("The reverse order of your float are \n");
    for (int i = 3; i > -1; i--){
        printf("%f, ", floaties[i]);
    }
    
    printf("\nThe average of the original array is\n");
    printf("%f", average);
}
