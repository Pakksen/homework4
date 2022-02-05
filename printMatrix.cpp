#include <ostream>
using namespace std;

void print(double** x, int n, int m, ostream& output) { // вывод матрицы
    output << "Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            output << x[i][j]<<" ";
        }
        output<<endl;
    }
}
