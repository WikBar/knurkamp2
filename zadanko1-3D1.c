//
// Created by root on 5/20/24.
//
#include <stdio.h>
#include <string.h>

void calc(int myNum, char operation, int myNum2) {
    if (operation!=NULL){
        if (operation == '+') {
            printf("%d", myNum + myNum2);
        }
        else if (operation == '-') {
            printf("%d", myNum - myNum2);
        }
        else if (operation == '*') {
            printf("%d", myNum * myNum2);
        }
        else if (operation == '/') {
            printf("%d", myNum / myNum2);
        }
        else {
            printf("Niepoprawne dzialanie");
        }
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        printf("%d", n);
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc,char** argv) {
    int myNum,myNum2 = 0;
    int fibNum = 0;
    char operation='A';
    scanf("%d", &myNum);
    scanf("%c", &operation);
    scanf("%d", &myNum2);

    calc(myNum, operation,myNum2);
    printf("Hello, World!\n");

    scanf("%d", &fibNum);
    printf("%d", fibonacci(fibNum));
    return 0;
}