#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; //문자열 넣을 배열 만들기
    
    // str1 입력
    printf("Enter str1: ");
    scanf("%[^\n]", str1); //공백 포함한 문자열 받기
    
    getchar(); //개행 문자 처리
    
    // str2 입력
    printf("Enter str2: ");
    scanf("%[^\n]", str2);
    
    // 내용 출력
    printf("-------------\n");
    printf("str1: %s\nstr2: %s\n", str1, str2);
    
    
    // 문자열 길이 출력
    printf("-------------\n");
    printf("length of str1: %lu\n", strlen(str1));
    printf("length of str2: %lu\n", strlen(str2));

    // str1과 str2 문자열 비교하기 1
    if (strcmp(str1, str2) == 0){ //같으면 0 다르면 1
        printf("str1 and 2 are same\n");
    } else {
        printf("str1 and 2 are not same\n");
    }
    
    // str2을 str1에 복사하여 출력
    printf("-------------\n");
    strcpy(str1, str2); //str2 내용을 str1에 덮어쓰기
    printf("copy str2 to str1: %s\n", str1);
    
    // str1과 str2 연결해서 출력
    printf("-------------\n");
    strcat(str1, str2); //str2 내용을 str1에 붙이기
    printf("concat str1 and str2: %s\n", str1);
    
    return 0;
}