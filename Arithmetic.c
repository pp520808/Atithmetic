/*
 * @Description: Arithmetic Function File
 * @Version: 1.0
 * @Autor: Roman.Liu
 * @Date: 2019-12-12 11:02:20
 * @LastEditors: Roman.Liu
 * @LastEditTime: 2019-12-12 18:57:27
 */
/* The begin of include */
#include <stdio.h>
#include "Arithmetic.h"
/* The end of include */
/**
 * @description: Buble sort application 
 * @param {int} int Arr[],int Len
 * @note: O(n^2)
 * @return: NULL
 * @author: Roman.Liu
 */
void Bubble_Sort(int Arr[],int Len)/* 冒泡排序 */
{
    int i,j,temp;
    /* 1.遍历整个数组 */
    for(i = 0;i<Len ; i++)
    {
        for(j=0;j<Len;j++)
        {  
            /* 2.如果右边的比左边的至小交换位置 */
            if(Arr[j]>Arr[j+1])
            {
                temp     = Arr[j];
                Arr[j]   = Arr[j+1];
                Arr[j+1] = temp;
            }    
        }
    }
}
/**
 * @description: Printf all the Arry
 * @param {int} int Arr[],int Len
 * @return: NULL
 * @author: Roman.Liu
 */
void Printf_Arry(int Arr[],int Len)/* 打印数组 */
{
    int i;
    for (i = 0; i < Len; i++)
    {
        printf("%d \t", Arr[i]);
    }
    printf(" \n");
}
/**
 * @description: selection sort fuction11
 * @param {int} int arr[], int len
 * @note: O(n^2)
 * @return: NULL
 * @author: Roman.Liu
 */
void Selection_Sort(int Arr[], int Len)/* 选择排序 */
{
    int i,j;
    int temp;
    for(i = 0;i<Len - 1;i++)
    {
        /* 1.选择第一个为最小 */
        int min = i; 
        /* 2.遍历其他元素 */
        for(j = i+1;j<Len ; j++)
        {
             /* 3.如果有比选出来的最小值小的 */
             if(Arr[j]<Arr[i])
             {
                /* 4.记录最小值位置 */
                min = j;
                /* 5.将最小值的位置做交换换到最前面 */                 
                temp = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = temp;
             }
        }
    }
}
/**
 * @description: 
 * @param {type} 
 * @note: 
 * @return: 
 * @author: Roman.Liu
 */
void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
/**
 * @description: Quickly Sort function
 * @param {type} 
 * @note: 
 * @return: NULL
 * @author: Roman.Liu
 */
static void Quick_Sort_Recursive(int Arr[], int start, int end) 
{
    if (start >= end)return; //！！当区域大小为0时 结束排序
    int mid = Arr[end];
    int left = start, right = end - 1;
    /* 1.分区操作比mid大的在右边 比mid小的在左边 */
    while (left < right) {
        /* 2.从前往后遍历跳过原本就比mid小的值 */
        while (Arr[left] < mid && left < right)
        {
            left++;
        }
        /* 3.从后往前遍历跳过原本就比mid大的值 */
        while (Arr[right] >= mid && left < right)
        {
             right--;
        }
        /* 4.在mid之前比mid大的值与在mid之后比mid小的值相互交换 */
        swap(&Arr[left], &Arr[right]);
    }
    /* 5.将mid值交换到大小分割线中间 下标小于left的值都是比小于等于mid的 */
    if (Arr[left] >= Arr[end])
    {
        swap(&Arr[left], &Arr[end]);
    }       
    else
    {
        left++;
    }      
    /* 6.递归运行 将中间值左边的区域继续分区，直到left = 0*/
    if (left)
    {
        Quick_Sort_Recursive(Arr, start, left - 1);
    }       
    /* 7.递归运行 将中间值右边的区域继续分区*/
    Quick_Sort_Recursive(Arr, left + 1, end);
}
void Quick_Sort(int arr[], int len) {
    Quick_Sort_Recursive(arr, 0, len - 1);
}
/**
 * @description: Insert Sort
 * @param {int} int Arr[],int Len
 * @note: 
 * @return: NULL
 * @author: Roman.Liu
 */
void Insert_Sort(int Arr[],int Len)/* 插入排序 */
{
    int i,j,key;
    for(i=1;i<Len;i++)
    {
        key = Arr[i];
        j = i-1;
        while((j>=0)&&(Arr[j]>key))
        {
            Arr[j+1] = Arr[j];
            j--;
        }
        Arr[j+1] = key;
    }
}

void boubsort(int arr[],int len)
{
    int i,j;
    int temp;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp =arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }

        }
    }
}
void selectsort(int arr[],int len)
{
    int i,j,temp;
    int selected;
    for(i=0;i<len;i++)
    {
        selected = i;
        for(j=i+1;j<len;j++)
        {
            if(arr[j]<arr[selected])
            {
                temp = arr[j];
                arr[j] = arr[selected];
                arr[selected]=temp;
              
            }
        }

    }
}
static quiksort(int arr[],int start,int end)
{
    if(start>=end)return 0;
    int temp;   
    int left = start;
    int right = end -1;
    int mid = arr[end];
    while(left<right)
    {
        while(arr[left]<mid&&left<right)
        {
            left++;
        }
        while (arr[right]>=mid&&left<right)
        {
            right--;
        }
        swap(&arr[left],&arr[right]);
    }
    if(arr[left]>=arr[end])
    {
        swap(&arr[left],&arr[end]);
    }
    else
    {
        left++;
    }
    if(left)
    {
        quiksort(arr,start,left -1);
    }
    quiksort(arr,left+1,end);
}
void quik(int arr[],int len)
{
    quiksort(arr,0,len-1);
}
void insertsort(int arr[],int len)
{
   int i,j;
   int key;
   for(i = 1;i<len;i++)
   {
       key = arr[i];
       j = i-1;
       while(j>=0&&arr[j]>key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}