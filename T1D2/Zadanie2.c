#include "stdio.h"
#include "stdlib.h"
void calc(int myNum, char operation, int myNum2) {

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

int main(int argc, char *argv[]) {
    int num1,num2;
    char* op=malloc(1);

    scanf("%d",&num1);
    scanf(" %c",op);
    scanf("%d",&num2);
    calc(num1,*op,num2);

    return 0;
}
