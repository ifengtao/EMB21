#include <stdio.h>
/**
 *  自加 ++
 *  自减 --
 */
int main() {
    int a = 1;
    printf("a=%d\n", a++ + ++a); // 4
    int b = 1;
    // 被称为"未定义行为"
    // C语言中并没有规则当前的行为
    // 问题：在C语言中，并没有规定复杂表达式的执行顺序
    // 没有办法保证后面执行是前面的结果
    // 所以：C语言中不建议写复杂的表达式
    // 语句：可以保证程序的执行顺序
    // 逗号：也是一个运算符，后面的一定可以拿到前面的执行结果
    // printf("b=%d\n", ++b + b++); // 5
    // , 是运算符
    // 可以保证(exp1, exp2),exp1先与exp2执行了
    int c = (++b, b++);
    printf("%d\n", c);
}
int main01() {
    int a = 1;
    
    // a++;
    // a--;
    // ++a;
    // --a;
    printf("a=%d\n", a++); // 1 先返回再加加
    printf("a=%d\n", a++); // 2
    printf("a=%d\n", a++); // 3 
    printf("a=%d\n", a++); // 4
    printf("a=%d\n", a); // ?=5
    printf("a=%d\n", a); // ?=5
    int b = 1;
    printf("b=%d\n", ++b); // 2 先加加再返回
    printf("b=%d\n", ++b); // 3
    printf("b=%d\n", ++b); // 4 
    printf("b=%d\n", ++b); // 5
    printf("b=%d\n", b); // ?=5
    printf("b=%d\n", b); // ?=5

    return 0;
}