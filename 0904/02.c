/**
 *  使用%d打印double类型
 *  
 *  6000的二进制：0001011101110000
 *  规格化的值：1.01110111*2^12
 *  0 00000000000 0000000000000000000000000000000000000000000000000000
 *  01000000101101110111000000000000000000000000000000000000000000
 */
#include <stdio.h>


// int main() {
//     float f=5.5;
//     printf("%d\n", f); // 记住：浮点数使用%d打印时，返回0
//     printf("%f\n", f);
//     printf("%d\n", *(int *)&f); // 1,085,276,160
//     printf("0x%x\n", *(int *)&f); // 40B00000
// }

int main() {
    int a = 10;
    int b = 20;
    double c = 30;
    double f = a * b * c; // 6000.0
    // double:1-11-52
    // 1.转换为科学计数法 2.规格化(指数、尾数、符号位) 3.按规则1-11-52存储
    // int:以地址为起始，取4字节长度
    // 现在是以%d(signed int)打印a*b*c浮点的二进制值
    printf("sizeof(double): %d\n", sizeof(f));
    printf("6000.0 的十六进制表示: 0x%llx\n", *((long long*)&f));
    printf("6000.0 的值: %lf\n", f);
    
    // 分析二进制表示
    long long bits = *((long long*)&f);
    printf("二进制表示 (64位): ");
    for(int i = 63; i >= 0; i--) {
        printf("%d", (bits >> i) & 1);
        if(i == 63 || i == 52) printf(" "); // 分隔符号位和指数位
    }
    printf("\n");
    
    return 0;
}