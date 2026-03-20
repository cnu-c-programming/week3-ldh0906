#include <stdio.h>

int add(int a, int b) {
    int temp = a + b;
    return temp;
}

int sub(int a, int b) {
    int temp = a - b;
    return temp;
}

int mul(int a, int b) {
    int temp = a * b;
    return temp;
}

int div(int a, int b) {
    int temp = a / b;
    return temp;
}

int main(void) {
    int a = 10; int b = 5;

    printf("%d + %d = %d\n", a, b, add(a,b));
    printf("%d - %d = %d\n", a, b, sub(a,b));
    printf("%d * %d = %d\n", a, b, mul(a,b));
    printf("%d / %d = %d\n", a, b, div(a,b));
    
}