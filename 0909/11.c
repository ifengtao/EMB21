/**
 *  函数参数
 *      - 作用：可以使函数变的更灵活
 * 
 *      - 形参：函数定义时设置的参数
 *      - 实参：函数调用时传递的参数
 * 
 *      - 形参的命名与实参的命名二者是没有任何关系的
 *      - 在函数调用，实参默认赋值给形参（隐藏的赋值过程）
 * 
 *      - 形参没有默认值的概念（其他语言会有默认值的概念）
 * 
 *      - 形参的数量
 *          - 建议不要超过7个
 *          - 函数可以拆分成多个函数
 */
#include <stdio.h>
// 函数原型
int add(int, int, int, int, int, int, int, int, int, int);
int main() {
    float x=1.9;
    int y=2;
    // x,y是实参
    // 按顺序依次赋值给形参
    // a=x,在赋值的过程进行类型转换
    // b=y
    // 因为函数调用(add(x, y))是表达式，所以可以直接写在另一个函数(printf())的调用表达式
    printf("%d\n", add(x, y, 0, 0, 0, 0, 0, 0, 0, 0));
    return 0;
}
// 函数定义
// a,b是形参
int add(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) 
{    
    int a1=1;
    int a2=1;
    int a3=1;
    int a4=1;
    int a5=1;
    int a6=1;

    printf("%p\n", &a1);
    printf("%p\n", &a2);
    printf("%p\n", &a3);
    printf("%p\n", &a4);
    printf("%p\n", &a5);
    printf("%p\n", &a6);
    printf("######################\n");
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);
    printf("%p\n", &g);
    printf("%p\n", &h);
    printf("%p\n", &i);
    printf("%p\n", &j);
    return a + b;
}