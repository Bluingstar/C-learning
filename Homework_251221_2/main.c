#include<stdio.h>
int search(int *a,int target);
int main(void){
    //赋值数组
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    //输入目标
    int target=0;
    scanf("%d",&target);
    //
    int position =search(a,target);
    if (position==0)
    {
        printf("not found");
    }else
    {
        printf("%d",position);
    }
    
    

    
    return 0;
}
int search(int *a,int target){
     for (int times = 0; times < 10; times++)
    {
        if ( *(a+times)==target)
        {
            return times+1;
        }
        
    }
    return 0;

}