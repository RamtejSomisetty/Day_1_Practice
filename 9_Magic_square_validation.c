#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//: Generate magic square of odd order n×n 
// from 1 to n*n numbers , all the numbers should be present;
//sum of all the rows,columns and diaginals will remains same

int is_numbers_present(int n, int array[][3]) {
    int total = n * n;
    int present[10] = {0}; // Use 10 because 1 to 9 for 3x3 matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = array[i][j];
            if (val >= 1 && val <= total) {
                present[val] = 1; // Mark number as present
            }
        }
    }

    // Check if all numbers from 1 to n*n are marked present
    for (int i = 1; i <= total; i++) {
        if (present[i] == 0) {
            return -1; // Missing number
        }
    }
    return 1; // All numbers present
}

void magic_square_or_not(int array[][3],int n){
    if(n%2!=0){//given that n need to be an odd number
        int sum_column_1=0;
        int sum_column_2=0;
        int sum_column_3=0;

        int sum_row_1=0;
        int sum_row_2=0;
        int sum_row_3=0;

        int sum_diagonal_1=0;
        int sum_diagonal_2=0;

        for(int i=0;i<3;i++){
            sum_row_1=sum_row_1+array[0][i];
            sum_row_2=sum_row_2+array[1][i];
            sum_row_3=sum_row_3+array[2][i];

            sum_column_1=sum_column_1+array[i][0];
            sum_column_2=sum_column_2+array[i][1];
            sum_column_3=sum_column_3+array[i][2];

            sum_diagonal_1=sum_diagonal_1+array[i][i];
            sum_diagonal_2=sum_diagonal_2+array[i][2-i];
        }
        int result =is_numbers_present(n,array);
        if(sum_row_1==sum_row_2 && sum_row_1==sum_row_3 && sum_row_1==sum_column_1&&sum_row_1==sum_column_2&&sum_row_1==sum_column_3&&sum_row_1==sum_diagonal_1&&sum_row_1==sum_diagonal_2&&result==1){
            printf("\nThe given matrix is magic square\n");
        }
        else{
            printf("\nThe given matrix is not magic square\n");
        }
    }
}

int main(){
    int n=3;
    int array[][3]={{8,1,6},{3,5,7},{4,9,2}};
    magic_square_or_not(array,n);
}