#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chess[8][8] = {
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1},
        {1,0,1,0,1,0,1,0}
    };
    char A[8][8];
    char sum[8][8];
    int i, j;
    int cnt=0;

    for(i=0;i<8; i++)
        gets(A[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            sum[i][j] = chess[i][j]+A[i][j];
            if(sum[i][j]=='F'){
                cnt += 1;
            }
        }
    }
    printf("%d ", cnt);
    return 0;
}