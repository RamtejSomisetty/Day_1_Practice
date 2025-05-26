
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x) x*x
//dangling pointer
int* getPointer() {
    int x = 5;
    return &x;
}

int main() {

  /*  //dangling pointer trap
    int *ptr = getPointer();
    printf("%d\n", *ptr); // Undefined behavior*/


    int result = SQUARE(3 + 1);// we may thing (3+1)*(3+1) means  16 but the value will be 3+1*3+1 =7 // mostly we would confuse
    printf("%d\n", result);
    return 0;
}
