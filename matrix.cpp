//
// Created by робот on 06.02.2022.
//

#include "matrix.h"
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
double** arr(int n, int m) // создание матрицы
{

    double** x = new double* [n];
    for (int i = 0; i < n; i++) {
        x[i] = new double[m];
    }
    return x;
}

void print(double** x, int n, int m) { // вывод матрицы
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Arr[" << i << "][" << j << "] = ";
            cin >> x[i][j];
        }
    }
}

void sum(double** x, int n, int m) { // сумма элементов матрицы
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += x[i][j];
    cout << "Summa:" << sum << endl;
}

int sumForTest(double** x, int n, int m) { // сумма для теста подпрограммы суммы
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += x[i][j];
    return sum;
}

void pr(double** x, int n, int m) { // произведение ненулевых элементов
    int pr = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (x[i][j] != 0) {
                pr = pr * x[i][j];
            }
    cout << "Proizvedenie:" << pr << endl;
}

int prForTest(double** x, int n, int m) { // подпрограмма для теста pr
    int pr = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (x[i][j] != 0) {
                pr = pr * x[i][j];
            }
    return pr;
}

void max_el(double** x, int n, int m) { // два наибольших значения матрицы
    int max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (x[i][j] > max1) {
                max2 = max1;
                max1 = x[i][j];
            }
            else max2 = x[i][j];
    cout << "Max1 = " << max1 << "\nMax2 = " << max2 << "\n";
}

void na_2(double** x, int n, int m) { // 2*arr
    int max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x[i][j] = x[i][j] * 2;
            cout << setw(3) << x[i][j] << " ";
        }cout << endl;
    }cout << endl;
}

void na_1_3(double** x, int n, int m) { // (1/3)*arr
    int max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x[i][j] = x[i][j] / 3;
            cout << setw(3) << x[i][j] << " ";
        }cout << endl;
    }cout << endl;
}

void sum_arr(double** a, double** c, int n, int m) // сумма двух матриц, b=2*a+(1/3)*c
{
    double** b = arr(n, m);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i][j] + c[i][j];
            cout << setw(3) << b[i][j] << " ";
        }cout << endl;
    }cout << endl;
}