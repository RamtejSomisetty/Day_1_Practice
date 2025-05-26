#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int gcd(int , int );

//finding GCD and LCM of two number by euclidian formula
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}
int main(){
    int a=4,b=12;
    int mul = a*b;
    int num = gcd(a,b);
    printf("LCM and HCF of two numbers %d,%d is %d and %d\n",a,b,((mul)/num),num);

}