# HomeWork Laba5
### Домашняя работа (Условие)
17. <img width="378" height="277" alt="Screenshot 2026-10-11 194517" src="https://github.com/user-attachments/assets/d0bef5d1-cfa6-474c-80d1-f596366ab0f6" />
<img width="758" height="123" alt="Screenshot 2026-10-11 194522" src="https://github.com/user-attachments/assets/11bc18d5-e5fb-45d7-926a-d69718b526a3" />


### 1. Алгоритм
1. Ввод значений переменных $x$, $y$.  
2. Вычисление слагаемого $A = (2 + y)^2$.  
3. Вычисление слагаемого $B = \sqrt{\sin(y + 5)} = (\sin(y + 5))^{1/7}$.  
4. Вычисление числителя $N = \sqrt{A + B}$.  
5. Вычисление слагаемого $C = \ln(x + 1)$.  
6. Вычисление слагаемого $D = y^3$.  
7. Вычисление знаменателя $Z = C - D$.  
8. Проверка условия $Z \neq 0$.  
9. Вычисление результата $F = N / Z$.  
10. Вывод $F$.

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

# Блок-схема

<img width="1420" height="1108" alt="gost-flowchart" src="https://github.com/user-attachments/assets/6c49b27f-9f46-42e8-87ea-7c139378e332" />


# 2. Реализация программы
Программа реализована на C

Числитель: sqrt(pow(2 + y, 2) + pow(sin(y+5), 1.0 / 7.0));

Знаменатель: log(x + 1) - pow(y, 3);

# 3. Результаты работы программы
Результат: отношение числителя(num) к знаменателю(den)


# 4. Информация о разработчике

ФИО: Козявин Николай Петрович

Группа: бОТИ-261
