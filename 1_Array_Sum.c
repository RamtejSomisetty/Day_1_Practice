#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arraySum(int [], int ) ;

int arraySum(int arr[], int n) {
    int sum=0;
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return arr[0];
    }
  
    else{
    
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    }
    return sum;
}
//Sum of Array Elements 
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    int n =sizeof(array)/sizeof(array[0]);
    int sum = arraySum(array,n);
    printf("Sum of elements in the array:%d\n",sum);
}
