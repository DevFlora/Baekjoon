#include <stdio.h>
#include <stdlib.h>

// 배열로 해결해도 되지만 굳이?이기 떄문에 조건문으로 해결하였음.
// 여기서 중요한 점은 숫자가 1개만 입력되는 케이스도 있다는 것. 그렇기에 if else if 로 작성 시 max 또는 min이 초기값 그대로 출력되는 문제가 발생함.
// 고로 if, if로 처리해야 안전함.
// 또한 최대값과 최소값 작성 시 입력될 수 있는 값보다 더 범위를 크게 설정해야 함. 그것이 관례라고 한다. by chatGpt

int main() {

    int i, min=1000000, max=-1000000, n,x;

    scanf_s("%d", &x);

    for (i=0; i<x; i++) {

        scanf_s("%d", &n);
        if (n>max) max=n;
        if (n<min) min=n;

    }
    printf("%d %d", min, max);

    return 0;
}
