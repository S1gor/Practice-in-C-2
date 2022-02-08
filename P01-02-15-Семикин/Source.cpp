#include <iostream>

void scanMas(int mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("mas[%d] = ", i);
		scanf_s("%d", &mas[i]);
	}
}

int MaxOrMin()
{
	int n;
	do {
		printf("\n¬ведите 0 - найти MIN\n¬ведите 1 - найти MAX\n");
		scanf_s("%d", &n);
	} while (n > 1 || n < 0);
	return n;
}

int MIN(int mas[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		int min = mas[0];
		if (mas[i] < min)
		{
			min = mas[i];
			counter = i;
		}
	}
	return counter;
}

int MAX(int mas[], int size)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		int min = mas[0];
		if (mas[i] > min)
		{
			min = mas[i];
			counter = i;
		}
	}
	return counter;
}

int main()
{
	system("chcp 1251");

	const int N = 5;
	int mas[N];

	scanMas(mas, N);
	int n = MaxOrMin();

	if (n == 0)
	{
		int min = MIN(mas, N);
		printf("mas[%d] = %d\n", min, mas[min]);
	}
	if (n == 1)
	{
		int max = MAX(mas, N);
		printf("mas[%d] = %d\n", max, mas[max]);
	}
	return 0;
}