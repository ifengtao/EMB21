#include <stdio.h>
/**
 *  比较运算符
 *       ===
 *      - 对于运算的优先级
 *      - 在优先级相同的情况下，考虑结合律
 */
int main() {
    int a = 10;
    int b = 20;

    printf("a>b是否成立:%d\n", a>b);
    printf("a>b是否成立:%d\n", a<b);
    printf("a>b是否成立:%d\n", a>=b);
    printf("a>b是否成立:%d\n", a<=b);
    printf("a>b是否成立:%d\n", a==b);
    printf("a>b是否成立:%d\n", a!=b);

    // 数学中： 1 < a < 100，语义：a大于1并且a小于100
    // 计算机： 1 < a < 100
    // 先判断 1<a，得到的结果在判断是否小于0
    // 语义与数学中的不同，所以不能这么写
    printf("1 < a < 100是否成立:%d\n", 1 < a < 0);
    // 下面的语义与数学中相同
    printf("a>1 && a<100是否成立：%d\n", a>1 && a<100);
    
    // printf("%d", a===b); // C语言中没有===判断
    return 0;
}