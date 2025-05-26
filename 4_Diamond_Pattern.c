#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printDiamond(int );
//printing diamond from "*"
void printDiamond(int n) {

    //upper half triangle
    for(int i=0;i<n;i++){
        for(int space =1;space<n-i;space++){
            printf(" ");
        }
        for(int star=1;star<=2*i+1;star++){
            printf("*");
        }
        printf("\n");
    }
    //lower half triangle
    for(int i=1;i<n;i++){
        for(int space =1;space<=i;space++){
            printf(" ");
        }
        for(int star =1;star<=(2*(n-i)-1);star++){
            printf("*");
        }
        printf("\n");

    }
  
}
int main(){

    int n=5;
    printDiamond(n); 

}
