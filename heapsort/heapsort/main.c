#include<stdio.h>
#include<stdlib.h>

//�����ظ����еĴ���
#ifndef frequncy						
#define frequncy 1e+01
#endif // !true
//��������ĳ���
#ifndef length
#define length 127
#endif // !length


void move(int source[], int target[],int source_length);//�ƶ����麯��
void create(int source[],int array_length);//�������������
void sort(int target[],int array_length);//���ж�����

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
