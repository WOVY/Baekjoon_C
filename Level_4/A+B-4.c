//�Է��� ���� ������ A+B�� ����ϴ� ����. EOF�� ���� �˾ƺ�����.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B;

	while (scanf("%d %d", &A, &B) != EOF)
	{
		printf("%d\n", A + B);
	}
	
	return 0;
}