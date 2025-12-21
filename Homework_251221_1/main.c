#include <stdio.h>
void sort ( int *a, int n );
int main( )

{

      int a[100], i, n;

      scanf("%d", &n); //数组实际需要的元素个数

      for(i=0; i<n; i++)

            scanf("%d", &a[i]);

      sort(a,n);

      for(i=0; i<n; i++)

            printf("%d ", a[i]);

      return 0;

}
void sort ( int *a, int n ){ //降序排列
    int min=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<=a[j])
            {
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }
            
        }
        
    }
    

}