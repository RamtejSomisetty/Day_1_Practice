#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isPrime(int);
//checking whether the given number is prime number or not
int isPrime(int n){

    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        return 1;
    }
    else{
        return -1;
    }

}
int main(){
    int p=11;
    int check = isPrime(p);
    if(check ==1){
        printf("Given number is a prime number");
    }
    else if(check == -1){
        printf("Given number is not a prime number");
    }
}
