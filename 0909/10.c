/**
 *  函数调用：
 *      - 格式：函数名()
 *      - 作用：调用函数，会执行函数的代码块 
 *  函数访问：
 *      - 格式：函数名
 *      - 作用：返回函数所在内存的地址
 */
#include <stdio.h>

// 函数原型
// 函数原型对函数定义是有约束性：函数类型、参数顺序及数量
// 根据函数名确定函数原型与函数定义的关系
double fn(float a, double b);

int main() {
    printf("%p\n", fn); // 函数访问 00007ff7b380157b
    printf("%p\n", &fn); // 函数地址 00007ff7b380157b
    double d = fn(1.0, 3.14); // 函数调用，参数必须按顺序及数量依次传入
    printf("%lf\n", d);
    return 0;
}
int main01() {
    double d = fn(1.0, 3.14);
    // 避免变量与函数名重名，重名了会引发不必要的麻烦
    // int fn = 10;
    // printf("fn=%d\n", fn);
    printf("%lf\n", d);
    return 0;
}


// 函数定义
double fn(float f, double d) {
    return f + d;
}
// C语言中不允许出现相同的函数名
// double fn(float f, double d) {
//     return f + d;
// }