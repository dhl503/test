// Win32Project2.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//选择排序是首先找到一个最小或者最大的元素放到开头或者结尾，然后在对剩下的元素进行相同的操作
//算法复杂度是（n*n）
void select(int arr[], int len)
{
	int min;
	int temp = 0;
	for(int i = 0;i < len - 1;++i)
	{
		min = i;
		//找到最小值
		for(int j = i+1;j < len;++j)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}

		if(min != i)
			swap(arr, min , i);
	}
}
//冒泡排序算法
//
void maopao_sort(int arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(arr, j, j + 1);
			}
		}
	}	
}
//插入排序
//直接插入排序 时间复杂度n^2
void insert_sort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while(arr[j] > key && j >= 0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;	
	}
}
//希尔排序
void ShellSort(int *a, int len)
{
	
}
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = {444,2,3,4,567,5};
	ShellSort(arr, 6);
	for(int i = 0;i < sizeof(arr)/sizeof(arr[0]); ++i)
	{
		std::cout << arr[i] <<std::endl;
	}
	system("pause");
	return 0;
}

