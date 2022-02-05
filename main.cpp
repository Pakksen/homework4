#include <iostream>
#include "matrix.h"
#include "printFile.h"
//#include "printConsole.h"
// вещественная матрица

using namespace std;

int main()
{
    int n, m;
    cout << "Vvedite kol-vo stolbcov : "; cin >> n;
    cout << "Vvedite kol-vo  strok : "; cin >> m;
    double** a = arr(n, m);
    double** c = arr(n, m);
    print(a, n, m);
    print(c, n, m);

    // операции
    sum(a, n, m);
    pr(a, n, m);
    max_el(a, n, m);

    // задание
    na_2(a, n, m);
    na_1_3(c, n, m);
    sum_arr(a, c, n, m);
    cout<<"///////////////////"<<endl;
    printFile(a,n,m,"output");

    return 0;
}