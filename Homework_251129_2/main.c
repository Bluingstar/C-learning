#include<stdio.h>
int compute(int a);
int main(void){
    int n=0;
    int sum=0;
    scanf("%d",&n);
    if (n<0)
    {
        n=-n;
    }
    sum=compute(n);
    printf("sum=%d",sum);
    return 0;
}
int compute(int a){
    int s = 0;
    while (a > 0) {
        s += a % 10; // 加上最后一位数字
        a /= 10;     // 去掉最后一位数字
    }
    return s;
}