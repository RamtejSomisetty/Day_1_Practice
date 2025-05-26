#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// armstrong number ;
// example if n=153  , means 1^3+5^3+3^3 = 1+125+27 = 153

int isArmstrong(int );
void all_the_armstrong_numbers(int,int);

int size_of_number(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return count;
}
 
int isArmstrong(int n){
    int sum =0;
    int num =n;
    int k= size_of_number(n);
    for(int i=0;i<k;i++){
        int s= n%10;
        n=n/10;
        sum = sum+s*s*s;
    }
    if(num==sum){
        return num;
    }
    else{
        return -1;
    }
}

void all_the_armstrong_numbers(int begin,int end){
    printf("\nArmStronf Numbers among %d and %d :-",begin,end);
    int count=0;
    for(int i=begin;i<=end;i++){
        if(isArmstrong(i)!=-1){
            printf("%d ",isArmstrong(i));
            count++;
        }
    }
    if(count==0){
        printf("\nNo Armstrong number among %d and %d ",begin,end);
    }
    printf("\n");
}

int main(){

    int begin = 100;
    int end = 200;
   
    all_the_armstrong_numbers(begin+1,end-1);
 
}