/**
 *  函数返回值：
 *      - 返回值的类型会自动转换为函数类型
 * 
 * 
 *  void
 *      - 关键字
 *      - 愿意：空间、空洞...
 *      - 表示没有的意思
 * 
 *  用来修饰函数类型，表示函数没有返回值
 *  void fn() --- 函数调用就不是表达式
 */
#include <stdio.h>
// int add(int, int);
// void
void add(float a, float b) {
    // a+b是返回值，数据类型为int
    // 因为函数类型为是float,a+b的值会自动转换float类型
    // 隐藏的数据类型转换
    // return a + b;
    printf("%f", a+b);
}

int main() {
    // 函数调用
    // 因为不是表达式，所以同样不可以做右值
    add(1.2,2.9); 
    // printf("%d", );
    return 0;
}
