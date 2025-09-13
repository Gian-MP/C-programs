#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
int main() { 
    char user_input [20]; 
    int vowel_amount = 0;
    printf("Enter a string"); 
    scanf("%s", &user_input); 
    int length = strlen(user_input); 
    
    if (strlen(user_input) <= 20) { 
        for (int i = 0; i < length; i++){
            if (user_input[i] == 'a' || user_input[i] == 'e' ||
            user_input[i] == 'i' || user_input[i] == 'o' ||
            user_input[i] == 'u' || 
            user_input[i] == 'A' || user_input[i] == 'E' ||
            user_input[i] == 'I' || user_input[i] == 'O' ||
            user_input[i] == 'U'){
                vowel_amount += 1;
            }
            user_input[i] = toupper(user_input[i]);
            printf("%c", user_input[i]); 
        }
    }
    else { 
        printf("Please enter 20 or less"); 
    }
    printf("\nAmount of vowels: ");
    printf("%d", vowel_amount);
    
}
