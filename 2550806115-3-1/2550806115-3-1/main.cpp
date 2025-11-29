#include<stdio.h>
int main(void) {
    //初始化数组
    const int segments[10][7] = {
{1,1,1,1,1,1,0},//0
{0,1,1,0,0,0,0},//1
{1,1,0,1,1,0,1},//2
{1,1,1,1,0,0,1},//3
{0,1,1,0,0,1,1},//4
{1,0,1,1,0,1,1},//5
{1,0,1,1,1,1,1},//6
{1,1,1,0,0,0,0},//7
{1,1,1,1,1,1,1},//8
{1,1,1,1,0,1,1},//9
    };
    //读入数据
    int input = 0;
    printf("请输入一个整数：");
    scanf_s("%d", &input);
    //计算位数x以便拆解
    int a = input;
    int x = 0;
    for (int i = 0; a != 0; i++)
    {
        a = a / 10;
        x = i + 1;
    }
    //主体
    for (int i = 0; i < x; i++)
    {
        int xt = 1;//xt是除以几个10
        for (int j = 0; j < x - j; j++)
        {
            xt = 10 * xt;
        }
        //拆数
        int num = input / xt;
        for (int j = 0; j < 7; j++)
        {
            printf("%d", segments[num][j]);
        }
        printf("\n");
        input = input - num * xt;
    }
    return 0;
}