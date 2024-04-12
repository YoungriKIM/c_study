/*
// int, char, float, double의 byte 값 구하기
#include <stdio.h>

int main()
{
    printf("Size of char = %lu\n", sizeof(char)); //lu = long unsigned 부호없는 정수
    printf("Size of int = %lu\n", sizeof(int));
    printf("Size of float = %lu\n", sizeof(float));
    printf("Size of double = %lu\n", sizeof(double));
    return 0;   
}
// -------------------------------------------------------------------------------

// 두 숫자 바꾸기
#include <stdio.h>

int main()
{
    int num1, num2;
    int tmp;
    
    num1 = 10, num2 = 20;
    printf("[1] num1 = %d, num2 = %d\n", num1, num2);
    
    tmp = num1; //tmp 있어야 교환 가능
    num1 = num2;
    num2= tmp;
    printf("[2] num1 = %d, num2 = %d", num1, num2);
    
    return 0;
}
// -------------------------------------------------------------------------------

// 들어온 숫자 짝수, 홀수 확인
#include <stdio.h>

int main()
{
    int num;
    printf("숫자 입력: ");
    scanf("%d", &num);
    
    if (num%2 == 0){
        printf("숫자는 짝수\n");
    } else {
        printf("숫자는 홀수\n");
    }
    
    return 0;
}
// -------------------------------------------------------------------------------

// 여러 숫자 중 가장 작은 수 구하기
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int min_num = INT_MAX; //가장 큰 int로 지정
    int num;
    int i;
    
    printf("몇 개의 숫자를 입력?");
    scanf("%d", &n);
    
    printf("%d개의 숫자를 입력: ", n);
    
    for (i=1; i<=n; i++) {
        scanf("%d", &num);
        
        if(num<min_num){
            min_num = num;
        }
    }
    printf("가장 작은 수는: %d", min_num);
    
    return 0;
    
}
// -------------------------------------------------------------------------------

// 캐릭터가 알파벳인지 숫자인지 구하기
#include <stdio.h>

int main(){
    char ch;
    
    printf("캐릭터 하나 입력: ");
    scanf("%c", &ch);
    
    if(ch >= '0' && ch <= '9') //하나의 문자열 character는 '' 작은 따옴표로 표시
        printf("입력한 캐릭터는 숫자\n");
        
    else if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("입력한 캐릭터는 문자\n");
        
    else
        printf("입력한 캐릭터는 숫자나 문자가 아님.\n");
}
// -------------------------------------------------------------------------------
*/
