#include <stdio.h> 
int main() {
    int arr[7];  // 定义7个元素的数组 
    // 输入前6个数 
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);  // 输入要插入的数 

    // 从后往前找到插入位置 
    int i = 5;  // 最后一个元素的下标 
    while (i >= 0 && arr[i] > m) {
        arr[i + 1] = arr[i];  // 后移 
        i--;
    }
    arr[i + 1] = m;  // 插入 

    // 输出：前6个元素后面加空格，最后一个元素不加 
    for (int j = 0; j < 6; j++) {
        printf("%d ", arr[j]);
    }
    printf("%d", arr[6]);  // 最后一个元素没有空格 

    return 0;
}
