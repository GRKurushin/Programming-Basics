#include <stdio.h>
#include <locale.h>
#include <string.h>
#define WORKERS 5

// Определить структуру с именем Worker, содержащую следующие поля: фамилия и 
// инициалы работника; название занимаемой должности; год поступления на работу.

struct Worker {
    char name[50];
    char position[50];
    int year;
};

void sort_year(struct Worker workers[], int n) {
    struct Worker t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (workers[j].year > workers[j + 1].year) {
                t = workers[j];
                workers[j] = workers[j + 1];
                workers[j + 1] = t;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    struct Worker workers[WORKERS] = {
        {"Иванов А.А.", "Инженер", 2010},
        {"Петров Б.Б.", "Менеджер", 2015},
        {"Сидоров В.В.", "Директор", 2008},
        {"Кузнецов Г.Г.", "Оператор", 2012},
        {"Лебедев Д.Д.", "Секретарь", 2018}
    };
    printf("До сортировки по году поступления на работу:\n");
    for (int i = 0; i < WORKERS; i++) {
        printf("%s, %s, %d\n", workers[i].name, workers[i].position, workers[i].year);
    }
    sort_year(workers, WORKERS);
    printf("\nПосле сортировки по году поступления на работу:\n");
    for (int i = 0; i < WORKERS; i++) {
        printf("%s, %s, %d\n", workers[i].name, workers[i].position, workers[i].year);
    }
    return 0;
}
