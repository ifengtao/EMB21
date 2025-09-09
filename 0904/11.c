/**
 * 把百分制转换成ABCDE <60 E 60-70 D 70-80 C 80-90 B 90
 * 
 * scanf(格式化字符串, 地址1, 地址2.....) 中断输入
 *      - %d 有符号整数
 *      - %u 无符号整出
 *      - %c 字符 0->48
 *      - %s 字符串
 * 
 *      - 注意：
 *          - 输入回车也会进入缓冲区
 *          - 缓冲区不为空，scanf就不会等待用输入
 *          - 建议每次清空缓冲区
 * 
 * 
 * fflush() 清空缓冲区
 *      - stdin 输入缓冲区
 *      - stdout 输出缓冲区
 *      
 */
#include <stdio.h>

int main() {

    while(1) {
        // 变量仅声明未赋值，此时为脏值(不确定)
        // 尽量在声明变量对齐赋予初始值
        int score = 0;
        // 打印提示信息
        printf("请输入学生分数\n");
        // 此处传入的score变量在内存中的地址，在scanf函数中可以修改score变量的值
        scanf("%d", &score);
        // 清空缓冲区
        fflush(stdin);
        printf("score=%d\n", score);

        if(score >= 90) {
            printf("A\n");
        } else if(score >= 80) {
            printf("B\n");
        } else if(score >= 70) {
            printf("C\n");
        } else if(score >= 60) {
            printf("D\n");
        } else {
            printf("E\n");
        }

    }

    // 可以使用Ctrl+C强制退出程序
    return 0;
}