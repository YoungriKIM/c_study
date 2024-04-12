/*
#include <stdio.h>
// 입력한 정수 출력하기
int main ()
{
  int num;
  printf ("Enter an integer number: ");
  scanf ("%d", &num);
  printf ("Entered number is %d", num);
  return 0;
}
// ---------------------------------------------------------------------

// 두 수 더하기
int main()
{
    int num1, num2, sum;
    printf("첫 번째 숫자 입력: ");
    scanf("%d", &num1);
    printf("두 번째 숫자 입력: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("두 수의 합은 %d", sum);
    return 0;
}
// ---------------------------------------------------------------------

// 두 수 곱하기
int main()
{
    int num1, num2, mul;
    scanf("%d", &num1);
    scanf("%d", &num2);
    mul = num1 * num2;
    printf("두 수의 곱은 %d", mul);
    return 0;
}
// ---------------------------------------------------------------------

# 여러 숫자 평균내기
int main()
{
    int num, sum, i;
    float average;

    printf("2개 숫자 입력: ");
    
    for(i=0; i<2; i++){
        scanf("%d", &num);
        sum += num;
    }

    average = sum/(float)2;
    printf("평균은 %.2f", average);
    
    return 0;
}
// ---------------------------------------------------------------------

# 문자의 아스키코드 출력하기
#include <stdio.h>

int main()
{
    char ch;
    printf("문자 입력: ");
    scanf("%c", &ch);
    
    printf("ASCII value of '%c' is '%d'", ch, ch);
    
    return 0;
}
// ---------------------------------------------------------------------

//두 수를 나누고 몫과 나머지 구하기
#include <stdio.h>

int main()
{
    int num1, num2, q, rem;
    printf("첫 번째 숫자: ");
    scanf("%d", &num1);
    printf("두 번째 숫자: ");
    scanf("%d", &num2);
    
    if(num2==0){
        printf("0으로 나눌 수 없어요.");
        return 1;
    }
    
    q = num1/num2, rem = num1%num2;
    printf("몫은 %d, 나머지는 %d", q, rem);
    
    return 0;
}
// ---------------------------------------------------------------------
*/
