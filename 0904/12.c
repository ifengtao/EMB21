/**
 *  通过三元判断年龄是否满18岁
 */
#include <stdio.h>

int main()
{
    int age = 0;
    while (1)
    {
        printf("请输入年龄\n");
        scanf("%d", &age);
        fflush(stdin);
        printf("%s\n", age > 18 ? "成年" : "未成年");
    }
    return 0;
}

int main01()
{
    int age = 0;
repeat: // 标识位，需要符合标识符规范
    printf("请输入年龄\n");
    scanf("%d", &age);
    fflush(stdin);
    printf("%s\n", age > 18 ? "成年" : "未成年");
    goto repeat;
    return 0;
}