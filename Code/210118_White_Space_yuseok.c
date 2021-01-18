#include<stdio.h>

int main(){


char Arr[8][8];

	for(int i=0; i<8; i++)
		gets(Arr[i]);
		
	int white=0;	
	for(int i=0; i<8; i+=2){ 
		for(int j=0; j<8; j+=2){
			if(Arr[i][j] == 'F')
				white ++;
		}	
	}
	for(int i=1; i<8; i+=2){
		for(int j=1; j<8; j+=2){
			if(Arr[i][j] == 'F')
				white ++;
		}
	}	
	printf("%d", white);
return 0;
}