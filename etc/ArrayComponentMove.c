#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void valueChanger(int *n);

int main() {


	srand(time(NULL));
 // 배열 크기가 10. 0으로 초기화 1,2,3을 연속적으로 랜덤한 위치에 배정하고 이동
	int arr[10] = { 0 };
	int i, key=0;
	int startPos, endPos, assignPos, nxtPos, nowPos;


	startPos = rand() % 10;
	assignPos = startPos;
	endPos = startPos + 2;

	for (i = 0; i < 3; i++) {
		if (assignPos > 9) {
			assignPos = 0;
		}
		arr[assignPos] = i+1;
		assignPos++;
	}

	while (key != 101) {
		_getch();
		key = _getch();

		valueChanger(&startPos);
		valueChanger(&endPos);

		if (key == 75) {
			nowPos = startPos;
			for (i = 0; i < 3; i++) {
				nxtPos = nowPos - 1 ;
				valueChanger(&nowPos);
				valueChanger(&nxtPos);

				//printf("%d %d\n", nxtPos, nowPos);

				arr[nxtPos] = arr[nowPos];
				nowPos++;



			}
			arr[endPos] = 0;
			startPos--;
			endPos--;


		}
		else if (key == 77) {
			nowPos = endPos;
			for (i = 0; i < 3; i++) {
				nxtPos = endPos + 1-i;
				
				valueChanger(&nxtPos);
				valueChanger(&nowPos);
				//printf("%d %d\n", nxtPos, nowPos),
				arr[nxtPos] = arr[nowPos]; 
				nowPos--;
			}
			arr[startPos] = 0;
			startPos++;
			endPos++;

		}


		for (i = 0; i < 10; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");


	}



	return 0;
}

void valueChanger(int *n) {
	if (*n > 9) {
		*n = 0;
	}
	else if (*n < 0) {
		*n = 9;
	}

}
