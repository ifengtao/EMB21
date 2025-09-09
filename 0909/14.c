/**
 * main作为程序入口，在调用被调用立即执行
 *  - 可以接收执行的传递的参数
 *  - 在程序中只能有一个
 */
#include <stdio.h>

/// @brief 入口程序
/// @param argc 参数数量
/// @param argv 参数列表
/// @return 0
int main(int argc, char *argv[])
{
    printf("参数数量为%d\n", argc);
    // 计算数组的长度

    for (int i = 0; i < argc; i++)
    {
        printf("索引：%d 值：%s\n", i, argv[i]);
    }
    return 0;
}