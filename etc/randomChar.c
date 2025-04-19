#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//6 12 10

int main() {

//    영문 소문자, 대문자 사이에 영문자 한개를 랜덤으로 선택
//    외부 입력으로 소문자인지 대문자인지 맞추는 문제 소문자는 1출력 대문자는 2출력
//

    srand(time(NULL));

    int r = rand() % 2;
    int answer;
    char n;

    if (r==0) {
        n='A'+rand()%26;

    }
    else {
        n = 'a'+rand()% 26;
    }
    printf("정답: %c",n);
    scanf_s("%d", &answer);
    if (answer==1 && (n>='a' && n<='z')){
        printf(" 소문자 정답");
    }
    else if (answer==2 && (n>='A' && n<='Z')){
        printf("대문자 정답");
    }
    else {
        printf("떙");
    }

    return 0;

}



