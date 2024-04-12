/*
// tutorial 추가
// -------------------------------------------------------------
#include <stdio.h>
int main(){
    int num;
    num = 5;
    printf("%d\n", num);
    printf("%p", (void *)&num); //주소값 출력
    return 0;
}
// -------------------------------------------------------------

#include <stdio.h>
int main(){
    int n;
    
    for (n=1; n<=100; n++){
        printf("%d", n);
    }
    return 0;
}
// -------------------------------------------------------------

#include <stdio.h>

int main(){
    int n;
    n=1;
    
    while(n<100){
        printf("%d", n);
        n = n+1;
    }
    return 0;
}
// -------------------------------------------------------------

#include <stdio.h>
int main(){
    int i;
    double number, multi = 1;
    
    for (i=1; i<=4; ++i){
        printf("곱할 %d번째 n 입력(양수)", i);
        scanf("%lf", &number);
        
        if (number < 0.0)
            break;
        
        multi *= number;
    }
    printf("모든 n의 곱: %lf", multi);
    return 0;
}
// -------------------------------------------------------------

#include <stdio.h>
int main (){
    int number;
    
    for (number=5; number>0; number--){
        if (number==3){
            printf("pass\n");
            continue;
        }
        printf("%d\n", number);
    }
    return 0;
}
*/
