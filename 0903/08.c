/**
 * 算术运算符
 *  + - * / %
 * 逻辑运算符
 *  && || ！
 * 比较运算符
 *  < > <= >= !=
 * 赋值运算符
 *  = += -= *= /= %=
 *  &= |= ^=
 * 位运算符*
 *  & | ^
 * 三元运算符
 *  exp?exp1:exp2
 * sizeof() 返回字节大小
 * 
 * 
 * 
 * 什么是一元运算符？ 什么是二元运算符？
 *  - 元指的是操作数
 *  1+1 2-1
 * 
*/
#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    float f = 1.9;
    // 在进行算术运算时，窄类（字节大小）型自动升为宽类型
    printf("%d\n", a + b + f);
    // int和float都是4字节
    // float 2^128
    // int 2^32
    printf("%f\n", a + b + f); // 表达式的结果为float类型

    // 强制类型转换
    // 只取整数部分，忽略小数部分
    int c = (int)f;

    printf("c=%d\n", c);

    // 除法
    // 2个整数相除返回的一定是整数
    float e = 5/2; // 可以证明2个整数相除得到整数
    float g = 5.0/2; // 因为浮点参数除法，所以的到是浮点数
    
    printf("e=%f\n", e);
    printf("g=%f\n", g);

    // 取余 （只能是整数）
    int h = 5%3;
    printf("h=%d\n", h);

    int i=-1;
    int l=-i; // -转换为负数
    printf("i=%d\n", i);
    printf("l=%d\n", l);
    
    
    return 0;
}