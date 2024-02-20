#include <iostream>
#include <cmath>

using namespace std;

class Engine {
private:
    int a = 0;
    double result = 0;

public:
    Engine(int value) {
        a = value;
    }

    void calc() {
        if (a <= 2) {
            f_lt();
        } else {
            f_gt();
        }
    }

    void f_lt () {
        result = pow(a, 2) + 4 * a + 5;
        message();
    }

    void f_gt () {
        result = pow(a, 2) + 4 * a + 5;
        result = 1 / result;
        message();
    }

    void message() {
        cout << result;
    }


};