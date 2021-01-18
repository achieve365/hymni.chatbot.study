#include <stdio.h>
#include <stdlib.h>    // qsort 함수가 선언된 헤더 파일

//오름차순으로 하면 0이 맨처음 나왔을때 여러개 중 골라야되니까 내림차순으로 하기로 함
//내림차순일 경우 0에 대한 처리 안해줘도 됨
//1. A내림차순  2. B요소들이랑 곱해보고 제일 작은 값 찾기  3. 작은 값 더하기
//A큰거 * B작은거

int compare(const void *a, const void *b);  

int main(void){
	int N;
	scanf("%d", &N);
	
	int a_arr[N];
	int b_arr[N];
	int sum=0;								
	int min_idx=0;							//b_arr에서 삭제할 min_idx 
	int count=sizeof(b_arr)/sizeof(int);	//b_arr 요소 개수
	int min_mul;							//a_rr*b_arr 최소인 값 넣을 변수
	
	//A, B 입력
	for(int i=0; i<N; i++)
		scanf("%d", &a_arr[i]);	
	for(int i=0; i<N; i++)
		scanf("%d", &b_arr[i]);
	
	// A배열 내림차순 : qsort(정렬할 배열, 요소 개수, 요소 크기, 비교 함수)
    qsort(a_arr, sizeof(a_arr) / sizeof(int), sizeof(int), compare);
	
	//B요소들과 모두 곱해보고 제일 작은 값 찾기
	for(int i=0; i<N; i++){
		min_mul=100001; //매우큰값
		for(int j=0; j<count; j++){
			if(a_arr[i]*b_arr[j] <= min_mul){
				min_mul = a_arr[i]*b_arr[j];
				min_idx = j;
			}
		}
		
		//B배열 최소값 삭제
		for(int b=min_idx; b<count; b++)
			b_arr[b] = b_arr[b+1];
		count--;
		
		sum+=min_mul;
	}
	
	printf("%d",sum);
	
	return 0;
}

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;    // 내림차순
}