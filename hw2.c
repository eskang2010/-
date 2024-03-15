#include<stdio.h>

int main()
{

	char* ptr[4] = { "Korea", "Seoul", "Mapo", "152번지 2/3" };

	char* pir[4] = { "Korea", "Seoul", "Jongno", "152번지 2/3" };

	for (int i = 0; i < 4; i++)
	{
		printf(ptr[i]);
		printf("\n");

	}

	printf("\n");

	for (int j = 0; j < 4; j++)
	{
		printf(ptr[j])
		printf("\n");

	}

	return 0;
}

