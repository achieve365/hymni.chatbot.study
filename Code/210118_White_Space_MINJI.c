#include <stdio.h>

int main(){
	char str[8][8];
	int cnt=0;
	
	//input
	for(int i=0; i<8; i++){
		gets(str[i]);
	}
	
	//짝수,짝수
	for(int i=0; i<8; i+=2){
		for(int j=0; j<8; j+=2){
			if(str[i][j] == 'F')
				cnt++;
			else
				continue;
		}
	}
	
	//홀수,홀수
	for(int i=1; i<8; i+=2){
		for(int j=1; j<8; j+=2){
			if(str[i][j] == 'F')
				cnt++;
			else
				continue;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
    
}

