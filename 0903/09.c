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
*/
#include <stdio.h>
int main() {
    int a = 10;
    int b = 015;
    int c = '\0';
    // 对变量连续取！两次，是将其转换为对应布尔值
    printf("%d %d %d", !!a, !!b, !!c);
}
int main02() {
    int a = 0;
    // 逻辑或：exp1和exp2任一为true,则返回true否则返回false
    // 短路结构：exp1成立了，exp2不执行
    printf("%d\n", 1 || (a=1)); // 短路
    printf("%d\n", 0 || (a=2));
    printf("%d\n", 1 || (a=3)); // 短路
    printf("%d\n", 0 || (a=4));
    printf("a=%d\n", a);
    return 0;
}
int main01() {
    // 逻辑运算符
    // exp1 && exp2
    // exp1和exp2同时成立返回1,否则返回0
    // 短路结构：如果exp1为false,可以充分证明逻辑与表达式一定是false,所以exp2不执行

    int a = 1;
    int b = '0';
    int z = '\0';
    // 在C语言中
    // 0 10进制的0
    // \0 8进制的0
    // \x0 16进制的0
    //在C语言中，0返回false,非0返回true
    printf("0=%d\n", 0);
    printf("\\0=%d\n", '\0');
    printf("\\x0=%d\n", '\x0');
    printf("%d\n", a && b);

    // 短路结构：exp2未执行
    printf("%d\n", 0 && (b=1000));
    printf("b=%d\n", b);
    // 下面的表达式为什么报错
    // && 优先级高于 = int x = (0 && b) = 2000;
    int x = 0 && (b = 2000);
    printf("x=%d b=%d\n", x, b);
    return 0;
}