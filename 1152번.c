// %[^\n]	공백 포함 전체 줄을 읽음 (\n 전까지 모두) <- 미친 코드
// 해당 문제는 "단어"를 감지하는 것이 목표이다. 공백이 아니라.
// 따라서 문자로 시작하면 cnt++;를 해주는 것이다! 문자가 끝난, 즉 공백이 올 때까지 cnt를 추가하지 않는 것이다.



#include <stdio.h>
#include <stdlib.h>

int main() {
    char li[1000001]={0};
    int cnt=0;
    int checker = 0;

    scanf("%[^\n]",li);

    for (int i=0; li[i]!='\0'; i++) {
        if (li[i]!=' ' && checker==0){
            cnt++;
            checker = 1;
        }
        else if (li[i]==' ' && checker) {
            checker = 0;
        }
    }


    printf("%d",cnt);

    return 0;

}



