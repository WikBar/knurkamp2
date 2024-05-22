#include "stdio.h"

    void fibonacciONG(int n) {
        int a=0;
        int b=1;
        if (n>=0) {
            printf("%d ", a);
            while(b<n){
                printf("%d ", b);
                b += a;
                a = b - a;
            }
        }else{
            printf("liczba poniżej zera");
        }
    }


    int main(int argc,char** argv) {
        int fibNum;
        scanf("%d", &fibNum);
        fibonacciONG(fibNum);
        return 0;
    }