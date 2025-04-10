// 42로 나누어지는 값이 고정되어 있다. 그러므로 나머지 결과도 한정되어 있다는 뜻. 0~41까지의 나머지 결과가 나올 수 있으므로 그 결과의 번호를 배열 인덱스로 삼아 1로 저장한다.
// 그렇게 되면 0 또는 1이 배열에 저장되어 있고, 서로 다른 값을 효과적으로 샐 수 있다.
// 아이디어가 미친 거 같다.

#include <stdio.h>
#include <stdlib.h>
#define scanf_s scanf

int main() {
    int arr[43]={0}, i, a, cnt=0;

    for (i=0; i<10; i++){
        scanf_s("%d", &a);
        arr[a%42]=1;
    }

    for (i=0; i<42; i++){
        if (arr[i]!=0) {
            cnt+=1;
        }
    }
    printf("%d", cnt);

    return 0;

}
