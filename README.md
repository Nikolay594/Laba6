# HomeWork Laba5
### Домашняя работа (Условие)
17.

<img width="378" height="277" alt="Screenshot 2026-10-11 194517" src="https://github.com/user-attachments/assets/d0bef5d1-cfa6-474c-80d1-f596366ab0f6" />
<img width="758" height="123" alt="Screenshot 2026-10-11 194522" src="https://github.com/user-attachments/assets/11bc18d5-e5fb-45d7-926a-d69718b526a3" />


### 1. Алгоритм

1. Начать программу.  
2. Объявить переменные `x` и `y` типа `double`.  
3. Ввести с клавиатуры значения `x` и `y`.  
4. Проверить условие:  
   x >= 2.0 && x*x + y*y <= 36.0
5. Если условие истинно → вывести `YES`.  
6. Иначе → вывести `NO`.  
7. Завершить программу.

# Блок-схема
<img width="327" height="412" alt="Диаграмма без названия" src="https://github.com/user-attachments/assets/07d61683-c6cb-4cf9-b34a-c3c59f536248" />

# 2. Реализация программы
Программа реализована на C

Для ввода координат используется функция scanf()

Для проверки находится ли точка в области используется:

"&&" - логическое и;

">=" и "<=" - операторы сравнения;

If и else - условный оператор

# 3. Результаты работы программы
Программа определяет, лежит ли точка (x, y) в области, ограниченной вертикальной прямой и окружностью.

Контрольный пример: (3;0) --> Yes

Контрольный пример: (-3;0) --> No


# 4. Информация о разработчике

ФИО: Козявин Николай Петрович

Группа: бОТИ-261



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

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

int main()
{
	setlocale(LC_CTYPE, "RUS");
	//task_0();
	task_1();
}
