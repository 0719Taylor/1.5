#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//�����������ͱ���,��ʹ�õ���������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d,b=%d\n",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}



//�ҳ�ֻ����һ�ε���   ��Ŀ������һ���ǿ���������,����ĳ��Ԫ��ֻ����һ������,����ÿ��Ԫ�ؾ���������,�ҳ��Ǹ�ֻ����һ����Ԫ��.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//�ҳ�����
//	//�������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]�������г����˼���
//		int count = 0;//������
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
//			printf("������%d\n",arr[i]);
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
//3^3^5=5   -->������㽻����
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
	printf("������%d\n",ret);
	return 0;
}