#include <iostream>
#include <string>

using namespace std;

// Определить структуру с именем Insurance содержащую следующие поля: название 
// страховой  программы;  процентная  ставка  по  страховке;  срок  предоставления 
// страховки; сумма страховки.

class Insurance {
    string program;
    float rate;
    int duration;
    float amount;

    public:

        void input() {
            cout << "Введите название страховой программы на английском языке: ";
            getline(cin, program);
            cout << "Введите процентную ставку по страховке: ";
            cin >> rate;
            cout << "Введите срок предоставления страховки в годах: ";
            cin >> duration;
            cout << "Введите сумму страховки: ";
            cin >> amount;
        }

        void display() {
            cout << "\nИнформация о страховой программе:\n";
            cout << "Название программы: " << program << endl;
            cout << "Процентная ставка: " << rate << "%" << endl;
            cout << "Срок страховки в годах: " << duration << endl;
            cout << "Сумма страховки: " << amount << " рублей" << endl;
        }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Insurance insurance;
    insurance.input();
    insurance.display();
    return 0;
}
