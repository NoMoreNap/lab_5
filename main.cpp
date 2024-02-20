#include <iostream>
#include "Engine.h"

using namespace std;

int main() {
    unsigned int a = 0;
    setlocale(LC_ALL, "Russian");
    wcout << L"Введите а >> ";
    cin >> a;
    if (!cin.good()) {
        wcout << L"Ошибка ввода";
        return 0;
    }

    double max = sqrt((-1 * (1<<31)) - 1);
    double wrapper_a = a < 0 ? a * -1 : a;
    if (wrapper_a >= max) {
        wcout << L"Вне рабочего диапазона";
        return 0;
    }

    Engine F(a);
    F.calc();

    return 0;
}
