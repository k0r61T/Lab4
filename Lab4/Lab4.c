#include <stdio.h>
#include <locale.h>

int Lab4_z1();
int Lab4_z2();
int Lab4_z2_6();
int Lab4_z1a();
int Lab4_z1b();
int Lab4_z1v();

int main()
{
	setlocale(LC_ALL, "RUS");
	Lab4_z1();
}

int Lab4_z1()
{
	int main();
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("�������� ��������:\n");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %.2f\n", f);
	printf("double d = %.2e\n", d);

	printf("\n������� ����� ��������:\n");
	printf("������� ����:\n");
	scanf("%c", &c);
	printf("������� ���������� �����:\n");
	scanf("%d", &i);
	printf("������� ����� � ��������� ������ (float):\n");
	scanf("%f", &f);
	printf("������� ����� � ��������� ������ (double):\n");
	scanf("%lf", &d);

	printf("\n����� ��������:\n");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %.2f\n", f);
	printf("double d = %.2e\n", d);
}

int Lab4_z2()
{
	int main();
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("x = %d\ny = %6f\nz = %lf\n\n", x, y, z); //����� 3
	printf("��������� �����������:\n");
	printf("��� ������� int �� int ����������� ����� �������\n��������� 11 / 3 = 3 (������� �������������)\n����� ��� �������� ������������� � ��������������� ��� ���\n");
	return 0;
}

int Lab4_z2_6()
{
	int main();
	int a = 11, b = 3;
	//int x = a / b;
	//float y = a % b;
	//double z = a % b;
	printf("x = %d, y = %f, z = %lf\n", (int)a / b, (float)a / b, (double)a / b);
}

int Lab4_z1a()
{
	int main();
	float x;
	printf("������� �����:\n");
	scanf("%f", &x);
	int x1 = (int)x;
	float y = x - x1;
	printf("�������� �����: %f\n", x);
	printf("��������� ����� �����: %d\n", x1);
	printf("��������� ������� �����: %f\n", y);

	return 0;
}

int Lab4_z1b()
{
	int main();
	char x;
	printf("������� ������:\n");
	scanf("%c", &x);
	printf("\n������: %c\n", x);
	printf("���������� ���: %d\n", x);
	printf("����������������� ���: %x\n", x);
}

int Lab4_z1v()
{
	int main();
	int i;
	printf("������� ���������� �����:\n");
	scanf("%d", &i);

	if (i == 0) {
		printf("\n��� �������! ������ �� 0 ������.\n");
	}
	else {
		float y = 1.0 / i;
		printf("\n1/%d = %f\n", i, y);
	}

	return 0;
}