#include <stdio.h>
void f3() {
    int num3=3;
    char num4='3';
    printf("num3   = %p\n", (void*)&num3);
    printf("num4   = %p\n", (void*)&num4);
}
void f2() {
    int num2=2;
    char num3='2';
    printf("num2   = %p\n", (void*)&num2);
    printf("num3   = %p\n", (void*)&num3);
    f3();
}
void f1() {
    int num1=1;
    char num2='1';
    printf("num1   = %p\n", (void*)&num1);
    printf("num2  = %p\n", (void*)&num2);
    f2();
}
int main() {
    int num=4;
    char num1='4';
    printf("num   = %p\n", (void*)&num);
    printf("num1 = %p\n", (void*)&num1);
    f1();
}

