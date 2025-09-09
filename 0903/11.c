#include <stdio.h>
/**
 *  赋值运算符
 *      = 
 *      += -= *= /= %= 
 *      - 左值必须是内存空间
 *      - 右值必须是表达式
 * 
*/
int main() {
    int a = 10;
    int b = 20;
    a += 10; // 相当于 a = a + 10;
    printf("a=%d b=%d\n", a, b);
    b -= 10; // 相当于 b = b - 10;
    printf("a=%d b=%d\n", a, b);
    a /= b; // a = a / b;
    printf("a=%d b=%d\n", a, b);
    a *= b; // a = a * b;
    printf("a=%d b=%d\n", a, b);
    a %= b; // a = a % b;
    printf("a=%d b=%d\n", a, b); 
}