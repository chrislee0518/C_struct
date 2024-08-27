#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define value1 5
//int main()
//{
//
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pa = &a;
//	*pa = 0;
//
//	/*int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//
//	}*/
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0 };
//	int p= 0; 
//	p= &arr;
//	*p = pa;
//	if (*p != NULL)
//	{
//
//	}
//
//	return 0;
//}
//int mystrlen(char* str)
//{
//	char* fstart = str;
//	char* fend = str;
//	while (*fend!='\0')
//	{
//		fend++;
//	}
//	return fend - fstart;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = mystrlen(arr);
//	printf("%d", len);
//
//	return 0;
//}
//int main()
//{
//	float values[value1];
//	float* vp;
//	printf("Before initialization:\n");
//	for (int i = 0; i < value1; i++) {
//		printf("%f\n", values[i]);
//	}
//	for (vp = &values[value1]; vp > &values[0];)
//	{
//
//		*--vp = 0;
//	}
//	printf("After initialization:\n");
//	for (int i = 0; i < value1; i++) {
//		printf("%f\n", values[i]);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)//赋值
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)//打印
//	{
//		printf("%d\n", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ==== %p\n", p + i, &arr[i]);
//	}*/
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;
//	printf("%d", **ppa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//int count_bit_1(unsigned int a)//二进制有多少1
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;//取整
//	}
//	return count;
//}
//int count_bit_1(int a)//按位与，移位
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}

//int count_bit_1(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=count_bit_1(a);
//	printf("%d", count);
//	return 0;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = 0;
//	tmp = m ^ n;
//	
//	return count_bit_1(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count= %d", count);
//	return 0;
//}
//void Print(int m)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	Print(m);
//	return 0;
//}
//int main()//交换变量 无中间变量
//{
//	int a = 1;
//	int b = 2;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*(p + i)));
//	}
//}
//int main()
//{
//	int arr[] = { 1,23,3,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}
//void table(int n)//乘法口诀
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ",i,j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	table(n);
//
//	return 0;
//}
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != 0)
	{
		count++;
		arr++;

	}
	return count;

}
//void rever(char arr[])//倒置数组
//{
//	int left = 0;
//	//int right = strlen(arr) - 1;
//	int right = my_strlen(arr) - 1;
//	while (left <  right)
//	{
//
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
////}
//void rever(char* arr)//递归
//{
//	
//	char tmp = 0;
//	tmp = arr[0];
//	int len = my_strlen(arr);
//	//if (len <= 1)//递归必须要有终止条件(1)
//	//{
//	//	return;
//	//}
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)//递归中止条件（2）
//	{
//		rever(arr + 1);
//	}
//	arr[len - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	rever(arr);
//	printf("%s", arr);
//	return 0;
//}
//int digitlsum(unsigned int num)//递归求各位上的数求和
//{
//	if (num > 9)
//	{
//		return digitlsum(num / 10) + (num % 10);
//	}
//	else
//	{
//
//		num;//神奇digitalsum（1）=1；1+7+2+9
//	}
//}
////{
////	int sum = 0;
////	int sum1 = 0;
////	int sum2 = 0;
////	if (num > 9)
////	{
////		sum1=digitlsum(num / 10) + (num % 10);
////	}
////	else
////	{
////		sum2=num;
////	}
////	return sum=sum1+sum2;
////}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret =digitlsum(num);
//	printf("sum=%d", ret);
//	return 0;
//}

//int main()//n的k次方
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d%d", &n, &k);
//	for (i = 0; i < k; i++)
//	{
//		sum = n*sum;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//double pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / pow(n, -k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%f", ret);
//	return 0;
//}

typedef struct stu
{
	char name[20];
	short age;
	char tel[12];
	char sex[5];
}Stu;

void Print(Stu* ps)
{
	printf("name= %s\n", ps->name);
	printf("age= %d\n", ps->age);
	printf("name= %s\n", ps->tel);
	printf("name= %s\n", ps->sex);

}

int main()
{
	//typedef int zxc;
	//zxc a = 10;
	//int b = 2;
	Stu s = {"lk",20,"12345678901","male"};
	/*printf("%s", s.name);*/
	Print(&s);
	return 0;
}
