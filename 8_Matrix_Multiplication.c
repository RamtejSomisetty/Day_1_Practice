#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//matrix_multiplication of 3*3 matrix 

#define MAX 3
void multiplyMatrix(int a[][MAX], int b[][MAX], int result[][MAX]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = 0;  
            for(int k = 0; k < 3; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
int main(){

    int a[][MAX]= {{1,1,1},{1,1,1},{1,1,1}};
    int b[][MAX]= {{1,1,1},{1,1,1},{1,1,1}};
    int result[MAX][MAX]={0};
    multiplyMatrix(a,b,result);
}