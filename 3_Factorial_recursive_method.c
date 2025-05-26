#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long factorial(int );
//finding factorial of a number by recursive method
long long factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){

    int n=4;
    int num =factorial(n);
    printf("factorial value of %d is %d\n",n,num);
}