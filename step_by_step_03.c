/*
// -----------------------------------------------------
// C Program to reverse string entered from command line arguments
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){
    char input[MAX_LENGTH];
    
    printf("Enter a sting: ");
    scanf("%s", input);
    
    int length = strlen(input);
    
    printf("Original string: %s\n:", input);
    printf("Reversed string: ");
    
    for (int i = length - 1; i >= 0; i--){
        printf("%c", input[i]);
    }
    printf("\n");
    
    return 0;
}
// -----------------------------------------------------
*/

// C Program to convert decimal number to binary number
#include <stdio.h>

void decimalToBinary(int num){
    if (num > 0){
        decimalToBinary(num/2);
        printf("%d", num % 2);
    }
}

int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    if (num == 0){
        printf("0보다 큰 수 입력");
    } else {
        decimalToBinary(num);
    }
    printf("\n");
    return 0;
}   