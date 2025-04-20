// 자릿수 계산하는 코드가 사용됨.
// 0이 아닐 때까지 10으로 나누면서 cnt를 증가시키면 됨.
// 좋다. 이 문제를 문자열의 합치기로 해보려고했으나 c언어의 함수를 써야해서 안 함.


#include <stdio.h>
#include <stdlib.h>
#define scanf_s scanf


int main() {

    int a,b,c, sum=0,cnt=0, temp;

    scanf_s("%d %d %d",&a,&b,&c);

    sum = a+b-c;
    printf("%d\n",sum);

    temp=b;
    for (; temp!=0;){
        temp/=10;
        cnt++;
    }

    for (int i=0; i<cnt; i++) {
        a*=10;
    }
    a+=b;

    printf("%d", a-c);

    return 0;

}



