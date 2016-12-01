#include<stdio.h>
#include<stdlib.h>

//定义重复运行的次数
#ifndef frequncy						
#define frequncy 1e+01
#endif // !true
//定义数组的长度
#ifndef length
#define length 127
#endif // !length


void move(int source[], int target[],int source_length);//移动数组函数
void create(int source[],int array_length);//创建随机数数组
void sort(int target[],int array_length);//进行堆排序

int main(void)
{
	int a;
	int source[length],sort_source[length],sort_output[length];
	create(source,length);
	move(source, sort_source,length);
/*	while (i<frequncy)
	{
		a = rand()%90;
		printf("%d\n", a);
		i++;
	}
*/

	system("pause");
	return 0;
}

void move(int source[], int target[],int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		target[i] = source[i];
	}
}

void create(int source[],int array_length)
{
	for (int i = 0; i < array_length; i++)
	{
		source[i] = rand() % 50;
	}
}

void sort(int target[],int array_length)
{

}
