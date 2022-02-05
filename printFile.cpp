#include "printMatrix.h"
#include <iostream>
#include <fstream>
using namespace std;

void printFile(double** x, int n, int m, string filename) { // вывод матрицы
    ofstream stream(filename);
    //stream.open(filename, fstream::app);
    print(x,n,m,stream);
}