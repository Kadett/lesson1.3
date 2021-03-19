//
// Created by User on 019 19.03.21.
//
#include <iostream>

using namespace std;
void funcTask1(int a, int b, int c, int d) {
    cout << "Result = " << a * (b + ((double) c / d)) << endl;
}

void funcTask2() {
    const int testNum = 21;
    int inputNum;
    cout << "Input number:" << endl;
    cin >> inputNum;
    cout << "Task 2 result = " << ((inputNum <= testNum) ? testNum - inputNum : (inputNum - testNum) * 2);
}

void funcTask3() {
    int *p = nullptr;
    int arr[3][3][3] = {0};
    arr[1][1][1] = 5;

    //Первый вариант
    p = &arr[1][1][1];
    cout << *p << endl;
    //Второй вариант
    p = &arr[0][0][0];
    cout << *(p + 13) << endl;
    //Третий вариант (без разыменования)
    cout << p[13] << endl;
}

void funcTask4()
{
    extern int ex_a, ex_b, ex_c, ex_d;
    funcTask1(ex_a, ex_b, ex_c, ex_d);
}