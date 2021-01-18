#include <stdio.h>
#include <stdlib.h>

// Chess Row, Column Define
#define CHESS_ROW 8
#define CHESS_COL 8

int main(){    
    int lineFlag = 0, chessCnt = 0, iterIdx = 0;
    char chessMal;

    while(iterIdx < CHESS_ROW * CHESS_COL){
        // Newline을 제외한 character일 때만 처리
        if((chessMal = getc(stdin)) != '\n'){        

            // 줄에 따라 흰색의 위치를 판단 (처음(0)번째 - 짝수번의 색이 흰색 )
            lineFlag = (((int)(iterIdx / CHESS_ROW)) % 2 == 0)?0:1;    

            // 문제 조건에 맞는 경우
            if((iterIdx % 2 == lineFlag) && (chessMal == 'F')){
                chessCnt++;
            }

            iterIdx++;
        }
    }

    printf("%d", chessCnt);

    return 0;
}