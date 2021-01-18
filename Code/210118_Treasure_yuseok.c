#include<stdio.h>
#include <memory.h>
int main(){

	int N;

	while(1){
		
		scanf("%d",&N);
		if(N<=50){
			break;
		}else
		{
		 scanf("%d",&N);	
		}
	}
	
	int ArrA[N];
	int ArrB[N];
	int ArrC[N];	
	
	for (int i=0; i<N; i++)
		scanf("%d", &ArrA[i]);
	

	for (int i=0; i<N; i++)
		scanf("%d", &ArrB[i]);

	int temp=0;

	for (int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(ArrA[j] >ArrA[j+1]){
				temp = ArrA[j];
				ArrA[j] = ArrA[j+1];
				ArrA[j+1] = temp;
			}
		}	
	}	
	
	memcpy(ArrC, ArrB, sizeof(ArrB));
	
	int temp1;
	for (int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(ArrC[j] < ArrC[j+1]){
				temp1 = ArrC[j];
				ArrC[j] = ArrC[j+1];
				ArrC[j+1] = temp1;
				}	
			}
		}
		
	int sum = 0;
	
	for(int i=0; i<N; i++)
	sum += ArrA[i]*ArrC[i];
	
	printf("%d", sum);
return 0;


/* 
int main(){

	int N;

	while(1){
		
		scanf("%d",&N);
		if(N<=50){
			break;
		}else
		{
		 scanf("%d",&N);	
		}
	}
	int ArrA[N];
	int ArrB[N];
	
	
	for (int i=0; i<N; i++)
		scanf("%d", &ArrA[i]);
	

	for (int i=0; i<N; i++)
		scanf("%d", &ArrB[i]);

	int temp=0;

	for (int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(ArrA[j] >ArrA[j+1]){
				temp = ArrA[j];
				ArrA[j] = ArrA[j+1];
				ArrA[j+1] = temp;
			}
		}	
	}	
	
	int temp1;
	for (int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(ArrB[j] < ArrB[j+1]){
				temp1 = ArrB[j];
				ArrB[j] = ArrB[j+1];
				ArrB[j+1] = temp1;
				}	
			}
		}
	int sum = 0;
	
	for(int i=0; i<N; i++)
	sum += ArrA[i]*ArrC[i];
	
	printf("%d", sum);
return 0;
} */