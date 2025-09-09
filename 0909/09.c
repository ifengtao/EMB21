/**
 *  C语言标准：
 *      - K&R C
 *      - C89 & C90
 *      - C99
 *      - C11
 *      - C17 & C18
 *      - C23
 *  函数声明：
 *      - 在C89、C90前，只需要提供函数声明即可
 *      - int add() 不需要提供函数参数以及类型
 *  函数原型：
 *      - 在C89、C90后，需要提供函数原型
 *      - 函数名+参数类型+函数类型
 *  - 因为在C语言中函数不可以重名，所以直接使用函数名就可以区分了
 */
#include <stdio.h>

// 前提：C语言要求函数调用前，被调用的函数在调用处是可见的
// 函数原型：调用者可见
int add(int, int);

int main() {
    int r = add(3,4);
    printf("r=%d\n", r);
    return 0;
}
// 函数原型
int square(int x);

// 函数定义：代码块
int add(int a, int b) {
    // 在add()调用square()时，二者的关系：调用者
    return square(a) + square(b);
}


// 在add()调用square()时，二者的关系：被调函数
int square(int x) {
    return x * x;
}
