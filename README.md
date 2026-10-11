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
   \( x \ge 2 \) **и** \( x \le 6 \) **и** \( x^2 + y^2 \le 36 \) **и** \( x^2 + y^2 \ge 16 \).  
5. Если условие истинно → вывести `YES`.  
6. Иначе → вывести `NO`.  
7. Завершить программу.

# Блок-схема

<img width="1420" height="1108" alt="gost-flowchart" src="https://github.com/user-attachments/assets/6c49b27f-9f46-42e8-87ea-7c139378e332" />


# 2. Реализация программы
Программа реализована на C

#include <stdio.h>
int main() {
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (x >= 2 && x <= 6 && 
        x * x + y * y <= 36 && 
        x * x + y * y >= 16) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

# 3. Результаты работы программы
Программа определяет, лежит ли точка (x, y) в области, ограниченной вертикальной прямымой и окружностью.


# 4. Информация о разработчике

ФИО: Козявин Николай Петрович

Группа: бОТИ-261
