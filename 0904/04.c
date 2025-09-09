/**
 *  switch(表达式) {
 *      case 值1:
 *          语句1;
 *          break;
 *      case 值2:
 *          语句2;
 *          break;
 *      case 值3:
 *          语句3;
 *          break;
 *      default:
 *          语句4;
 *          break;
 *  }
 * 
 *  特征：
 *      1. case 后面的值必须是字面量
 *      2. case 后面的值不可以重复
 *      3. default 可以书写在任何位置
 * 
 *  switch执行：
 *      - 选择阶段
 *          - 是判断表达式的值与case选项的值是否匹配（从上至下依次判断）
 *          - 没有匹配成功执行default
 *          - 匹配成功执行对应case语句
 *      - 执行阶段
 *          - 进入执行阶段后，依次执行语句（不会考虑case）
 *          - 直到遇到break则退出switch
 */
#include <stdio.h>
#define n 7
int main() {

    // const int n = 7;
    /**
     * 将分值转换为90-A、B、C、D、E 
     */ 
    int s = 100;
    // s/10,因为是整数除法，所以结果为7
    switch(s/10) {

        default:
            printf("E\n");
            break;
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case  n:
            printf("C\n");
            // break;

        case 6:
            printf("D\n");
            break;        
    }

    return 0;
}