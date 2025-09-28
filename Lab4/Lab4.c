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
	printf("Исходные значение:\n");
	printf("char c = %c\n", c);
	printf("int i = %d\n", i);
	printf("float f = %.2f\n", f);
	printf("double d = %.2e\n", d);

	printf("\nВведите новые значения:\n");
	printf("Введите знак:\n");
	scanf("%c", &c);
	printf("Введите десятичное число:\n");
	scanf("%d", &i);
	printf("Введите число с плавающей точкой (float):\n");
	scanf("%f", &f);
	printf("Введите число с плавающей точкой (double):\n");
	scanf("%lf", &d);

	printf("\nНовые значения:\n");
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
	printf("x = %d\ny = %6f\nz = %lf\n\n", x, y, z); //Ответ 3
	printf("Пояснение результатов:\n");
	printf("При делении int на int выполняется целое деление\nРезультат 11 / 3 = 3 (остаток отбрасывается)\nЗатем это значение преобразуется в соответствующий нам тип\n");
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
	printf("Введите число:\n");
	scanf("%f", &x);
	int x1 = (int)x;
	float y = x - x1;
	printf("Исходное число: %f\n", x);
	printf("Отдельная целая часть: %d\n", x1);
	printf("Отдельная дробная часть: %f\n", y);

	return 0;
}

int Lab4_z1b()
{
	int main();
	char x;
	printf("Введите символ:\n");
	scanf("%c", &x);
	printf("\nСимвол: %c\n", x);
	printf("Десятичный код: %d\n", x);
	printf("Шестнадцатеричный код: %x\n", x);
}

int Lab4_z1v()
{
	int main();
	int i;
	printf("Введите десятичное число:\n");
	scanf("%d", &i);

	if (i == 0) {
		printf("\nНет решения! Делить на 0 нельзя.\n");
	}
	else {
		float y = 1.0 / i;
		printf("\n1/%d = %f\n", i, y);
	}

	return 0;
}