// 굳이 자릿수를 알지 않아도 된다. 굳이 앞자리부터 처리하지 않아도 된다. 그 이유는 다음과 같다.
// 1245를 10으로 나눠보자. 124의 정수가 나온다. 나머지는 5가 나온다.
// 즉 우리는 뒷자리부터 분해할 수 있다는 것이다.

#include <stdio.h>

int main() {
    int A, B, C;
    int result;
    int digits[10] = {0};  /

  
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    result = A * B * C;

    
    while (result != 0) {
        int digit = result % 10;
        digits[digit]++;
        result /= 10;
    }


    for (int i = 0; i < 10; i++) {
        printf("%d\n", digits[i]);
    }

    return 0;
}
