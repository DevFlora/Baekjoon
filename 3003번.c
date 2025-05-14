*/
  다이얼을 if문으로 거르면서 더할 수도 있지만 배열을 통해 맵핑?하는 방식으로 해결할 수도 있다!!!!
  맵핑하는 새로운 방법!
*/
#include <stdio.h>

int main() {
    char word[16]; 
    int dial[26] = {
        3, 3, 3,     // A B C -> 3초
        4, 4, 4,     // D E F -> 4초
        5, 5, 5,     // G H I -> 5초
        6, 6, 6,     // J K L -> 6초
        7, 7, 7,     // M N O -> 7초
        8, 8, 8, 8,  // P Q R S -> 8초
        9, 9, 9,     // T U V -> 9초
        10,10,10,    // W X Y -> 10초
        10           // Z -> 10초
    };

    int sum = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];
        sum += dial[c - 'A'];
    }

    printf("%d\n", sum);

    return 0;
}

