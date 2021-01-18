#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S=0, i, j, temp = 0;
    int A[50], B[50];

    scanf("%d", &N);
    for(i=0;i<N;i++)               //A 배열 입력
        scanf("%d", &A[i]);

    for(i=0;i<N;i++)               //B 배열 입력
        scanf("%d", &B[i]);

    for(i=0;i<N;i++){              //A 오름차순 정렬
        for(j=0;j<N-i;j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1]=temp;
            }
        }
        for(j=0;j<N-1-i;j++){     //B 내림차순 정렬
            if(B[j] < B[j+1]){
                temp = B[j];
                B[j] = B[j+1];
                B[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
        S += A[i] * B[i];
    printf("%d", S);
    return 0;
}