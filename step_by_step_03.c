/*
// -----------------------------------------------------
// 입력받은 문자열 뒤집기
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

// 10진수를 2진수로 바꾸기
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

// -----------------------------------------------------
// 1차원 배열 연습
#include <stdio.h>
int main(){
    int numbers[3]; //정수 5개 넣을 배열
    int i;
    
    printf("Enter 3 numbers: \n");
    for (i=0; i<3; i++){
        scanf("%d", &numbers[i]);
    }
    
    // 입력받는 정수 3개 출력
    // printf("Entered numbers: \n");
    // for (i=0; i<3; i++){
    //     printf("%d\n", numbers[i]);
    // }
    
    printf("=>> %d\n", numbers[1]);
    printf("=>> %d\n", *(numbers+1));
    printf("=>> %d\n", *&numbers[1]);

    return 0;
}
// -----------------------------------------------------

//2차원 배열 연습
#include <stdio.h>

int main(){
    int matrix[2][2];
    int i, j;
    
    printf("Enter 2X2 size int: \n");
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("[%d][%d] value: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }}
        
    printf("Entered matrix: \n");
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf("[%d][%d]: %d\n", i+1, j+1, matrix[i][j]);
        }}
        
    printf("%d\n", *(&*matrix[0]+1));
    printf("%d", *matrix[0]+0);

    return 0;
}
// -----------------------------------------------------
*/















