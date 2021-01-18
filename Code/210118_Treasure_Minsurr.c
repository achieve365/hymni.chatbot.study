#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int N =0;
	scanf("%d", &N);

	if(N <= 50 && N > 0) {
	
		//정수 배열 A와 B
		int Arr_A[N];
		int Arr_B[N];
		//for문 동작을 위한 변수 i, j
		int i, j = 0;		

		//A 배열 값 입력
		for(i = 0; i < N; i++) {
			scanf("%d", &Arr_A[i]);
			if(Arr_A[i] < 0 || Arr_A[i] > 100) {
				printf("Error of arrA\n");
				exit(0);
			}
		}
	
		//B 배열 값 입력
		for(i = 0; i < N; i++) {
			scanf("%d", &Arr_B[i]);
			if(Arr_B[i] < 0 || Arr_B[i] > 100) {
				printf("Error of arrB\n");
				exit(0);

			}

		}
		//정렬을 하기위해 값을 임시로 담아두기 위한 변수
		int tmp_1 = 0;
		
		//배열 A의 오름차순 정렬
		for(i = 0; i < N-1; i++) {
			for(j = 0; j < N-1; j++) {
				if(Arr_A[j] > Arr_A[j+1]) {
					tmp_1 = Arr_A[j];
					Arr_A[j] = Arr_A[j+1];
					Arr_A[j+1] = tmp_1;
				}
			}
		}

		tmp_1 = 0;	
		//배열 B의 내림차순 정렬
		for(i = 0; i < N-1; i++) {
			for(j = 0; j < N-1; j++) {
				if(Arr_B[j] < Arr_B[j+1]) {
					tmp_1 = Arr_B[j];
					Arr_B[j] = Arr_B[j+1];
					Arr_B[j+1] = tmp_1;
				}
			}
		}
		
		int sum = 0;
		//정렬된 배열 A와 B의 곱의 합
		for(i = 0; i < N; i++) {
			sum = sum + (Arr_A[i] * Arr_B[i]);
		}
		printf("%d\n", sum);
		
	}
	else {
		printf("50 이하의 자연수만 입력하세요.\n");
		exit(0);

	}
	

	return 0;


}
