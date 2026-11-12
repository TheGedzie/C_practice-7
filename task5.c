#include <stdio.h>

long long calculate_iter(int max_step);
long long calculate_recurse(int max_step);

int main() {
    int n;
    printf("Введите номер треугольного числа N: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Ошибка: введите целое неотрицательное число.\n");
        return 1;
    }

    long long res_iter = calculate_iter(n);
    long long res_rec = calculate_recurse(n);

    printf("Итеративный подход: %lld\n", res_iter);
    printf("Рекурсивный подход: %lld\n", res_rec);

    return 0;
}

long long calculate_iter(int max_step) {
    long long sum = 0;

    for (int i = 1; i <= max_step; i++) {
        sum += i;
    }

    return sum;
}

long long calculate_recurse(int max_step) {
    if (max_step <= 0) {
        return 0;
    }
    if (max_step == 1) {
        return 1;
    }

    return max_step + calculate_recurse(max_step - 1);
}

