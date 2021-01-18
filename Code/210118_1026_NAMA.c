#include<stdio.h>
#include<stdlib.h>

// Sorting functions for qsort
int compare_asc(const void *a, const void *b)
{
    int num1 = *(int *)a, num2 = *(int *)b; 
    return (num1 < num2) ? -1 : 1;
}

int compare_desc(const void *a, const void *b)
{
    int num1 = *(int *)a, num2 = *(int *)b; 
    return (num1 > num2) ? -1 : 1;
}    

int main(){
    int num=0,arrSum=0;
    scanf("%d", &num);
    
    int *arrNum = (int*) malloc (sizeof(int)*num*2);

    for(int arrIdx = 0; arrIdx < (num * 2); arrIdx++){
        scanf("%d", &arrNum[arrIdx]);
    }

    // Sorting
    qsort(arrNum, num, sizeof(int), compare_asc);
    qsort(arrNum + num, num, sizeof(int), compare_desc);

    // Sum of mul
    for(int arrIdx = 0; arrIdx < num; arrIdx++){
        arrSum += arrNum[arrIdx] * arrNum[num + arrIdx];
    }

    printf("%d", arrSum);
    free(arrNum);

    return 0;

}
