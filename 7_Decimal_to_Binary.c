#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//conversion of decimal to binary number

void decimalToBinary(int n){

  
    int num =n;
    int array[n];
    int i=0;
    int count=0;
    while(n!=0){
        array[i]=n%2;
        n=n/2;
        i++;
        count++;
    }
    printf("convertion of decimal number %d to binary number : ",num);
    for(int i=count-1;i>=0;i--){
        printf("%d",array[i]);
    }
    printf("\n");
    

}

int main(){

    //Implement void decimalToBinary(int n)  using arrays

    int num =30;
    decimalToBinary(num);
}