/*
 * @Description: Application for Bubble Sort 
 * @Version: 1.0
 * @Autor: Roman.Liu
 * @Date: 2019-12-12 11:01:34
 * @LastEditors: Roman.Liu
 * @LastEditTime: 2019-12-12 18:54:35
 */
/* The begin of include */
#include <stdio.h>
#include "Arithmetic.h"
/* The end of include */
/**
 * @description: The main intence
 * @param {type} 
 * @return: 
 * @author: Roman.Liu
 */
//#pragma pack(2)
struct S
{
    char a[20];
    char b;
    double c;
    int *e;
};

int main(void)
{
    volatile  int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    static  int len = (int) sizeof(arr) / sizeof(*arr);
    boubsort( arr, len); /* 冒泡排序 */
    printf("冒泡排序\r\n");
    Printf_Arry(arr, len);  /* 打印数组 */
    static  int  arr1[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    selectsort(arr1,len);/* 选择排序 */
    printf("选择排序\r\n");
    Printf_Arry(arr1, len);  /* 打印数组 */
    static  int  arr2[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    quik(arr2,len);  /* 快速排序 */
    printf("快速排序\r\n");
    Printf_Arry(arr2, len);  /* 打印数组 */
    static  int  arr3[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    insertsort(arr3,len);
    printf("插入排序\r\n");
    Printf_Arry(arr3, len);  /* 打印数组 */
    printf("%d",sizeof(struct S));
    return 0;
}