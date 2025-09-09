#include <stdio.h>
#include <float.h>
#include <math.h>

int main() {
    printf("=== float 类型范围信息 ===\n\n");
    
    // 基本信息
    printf("float 大小: %zu 字节\n", sizeof(float));
    printf("float 精度位数: %d 位\n", FLT_DIG);
    printf("float 有效数字位数: %d 位\n", FLT_MANT_DIG);
    
    printf("\n=== 数值范围 ===\n");
    printf("最大正数 (FLT_MAX): %e\n", FLT_MAX);
    printf("最小正数 (FLT_MIN): %e\n", FLT_MIN);
    printf("最小正规化数: %e\n", FLT_TRUE_MIN);
    printf("机器精度 (FLT_EPSILON): %e\n", FLT_EPSILON);
    
    printf("\n=== 指数范围 ===\n");
    printf("最大指数: %d\n", FLT_MAX_EXP);
    printf("最小指数: %d\n", FLT_MIN_EXP);
    printf("以10为底的最大指数: %d\n", FLT_MAX_10_EXP);
    printf("以10为底的最小指数: %d\n", FLT_MIN_10_EXP);
    
    printf("\n=== 实际示例 ===\n");
    float large = 3.4e38f;
    float small = 1.2e-38f;
    float precision_test = 1.0f + FLT_EPSILON;
    
    printf("大数值示例: %e\n", large);
    printf("小数值示例: %e\n", small);
    printf("精度测试 (1.0 + FLT_EPSILON): %.10f\n", precision_test);
    printf("1.0 == (1.0 + FLT_EPSILON)? %s\n", 
           (1.0f == precision_test) ? "是" : "否");
    
    printf("\n=== 关于您代码中的注释 ===\n");
    printf("您提到 'float 2^38'，实际上:\n");
    printf("- float 的最大值约为 2^128 = %e\n", pow(2, 128));
    printf("- 但 FLT_MAX 约为: %e\n", FLT_MAX);
    printf("- 这是因为 IEEE 754 标准的复杂性\n");
    
    return 0;
}
