#include <iostream>
#include "Engine.h"

using namespace std;

int main() {
    int a = 0;
    setlocale(LC_ALL, "Russian");
    wcout << L"Введите а >> ";
    cin >> a;

    Engine F(a);
    F.calc();

    return 0;
}
