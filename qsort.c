微软笔试题,给数组排序,奇数在左侧,从小到大,偶数在右侧,从大到小
学习qsort灵活用法，注意是对值比较，而不是对索引比较。
#include <stdio.h>
#include <stdlib.h>
 
#ifndef ARRAY_LEN
#define ARRAY_LEN(arr) (sizeof (arr) / sizeof (arr[0]))
#endif
 
int is_even (int x)
{
    return 0 == x % 2;
}
 
int compare_rule (int x, int y)
{
    if (is_even (x)) {
        if (is_even (y))
            return y - x;
        else
            return 1;
    } else {
        if (is_even (y))
            return -1;
        else
            return x - y;
    }
}
 
int compare_warp (const void *x, const void *y)
{
    return compare_rule (*(int *)x, *(int *)y);
}
 
int compare_warp_normal (const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}
 
int main ()
{
    int i;
	int arr[]={8,2,4,3,5,6,1,7};
    for ( i = 0; i < ARRAY_LEN (arr); ++i)
        printf ("%d ", arr[i]);
    printf ("\n");
 
    qsort (arr, ARRAY_LEN (arr), sizeof (arr[0]), compare_warp);
 
    for (i = 0; i < ARRAY_LEN (arr); ++i)
        printf ("%d ", arr[i]);
    printf ("\n");
 
    return 0;
}
