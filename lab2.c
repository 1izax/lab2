#include <stdio.h>
#include <locale.h>

int bank()
{
	setlocale(LC_CTYPE, "RUS");

	double R = 150000.0;
	double W = 5.0;
	double K = 1.0 + W / 100.0;

	double month2 = R * K * K;
	double month3 = month2 * K;
	double month6 = month3 * K * K * K;

	printf("=============================================================\n");
	printf("ФИНАНСОВЫЙ ОТЧЕТ\n");
	printf("=============================================================\n");
	printf("Условие задачи:\n");
	printf("Клиент внес в банк %.2f рублей.\n", R);
	printf("Каждый месяц эта сумма увеличивается на %.1f процентов.\n\n", W);
	printf("Результаты расчетов:\n");
	printf("Через 2 месяца сумма составит %10.2f рублей.\n", month2);
	printf("Через 3 месяца сумма составит %10.2f рублей.\n", month3);
	printf("Через 6 месяцев сумма составит %10.2f рублей.\n", month6);
	printf("=============================================================\n");
}

int main()
{
	bank();
	getchar();
	return 0;
}