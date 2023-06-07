#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//交换两个整型变量,不使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d,b=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}



//找出只出现一次的数   题目：给定一个非空整型数组,除了某个元素只出现一个以外,其余每个元素均出现两次,找出那个只出现一个的元素.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//找出单身狗
//	//暴力求解
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在数组中出现了几次
//		int count = 0;//计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗：%d\n",arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//5^5=0  3^3=0  --> a^a=0  
//101    011
//101    011
//000    000
// 0^5=0  0^3=0 --> 0^a=a
//3^5^3=5
//3^3^5=5   -->异或满足交换律
int main()
{
	int arr[] = { 1,2,3,4,1,2,3,4,5 };
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("单身狗：%d\n",ret);
	return 0;
}