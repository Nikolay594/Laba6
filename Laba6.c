#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>


int main() {
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x >= 2.0 && x * x + y * y <= 36.0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;

    setlocale(LC_CTYPE, "RUS");
	//task_0();
	//task_1();
}



int task_0()
{
	int start, end, cnt, chr1, chr2;
	
	printf("Напишите два символа для печати: ");
	scanf("%c %c", &chr1, &chr2);

	printf("\nНапишите колличество символов для печати: ");
	scanf("%d", &cnt);
	
	
	printf("\nПоставить символ _+_ в начало (0-нет, 1-да)");
	scanf("%d", &start);

	printf("\nПоставить символ _+_ в конец (0-нет, 1-да)");
	scanf("%d", &end);

	if (start == 1) putchar('+');

	for (int start = 1; start <= cnt/2; start++) putchar(chr1);
	for (int start = 1; start <= cnt / 2; start++) putchar(chr2);

	if (end == 1) putchar('+');
}

int task_1()
{
	int n, m;
	int k = 1;
	int s = 0;
	printf("Введите значения n и m: ");
	scanf("%d %d", &n, &m);

	for (int i = m; i >= n; i--){

		s += i;
		printf("\nВыполнено %d раз", k++);
	}

	printf("\nРезультат %d", s);
}
// n=3 m=5 Результат 12, Выполнено 3 раза
// n=3 m=8 Результат 33, Выполнено 6 раз
