#include <iostream>
#include "matrix.h"
#include "printFile.h"
#include <gtest/gtest.h>
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
    RUN_ALL_TESTS();
    return 0;
}

TEST(sumMatrix,sum_arr){
    int n,m;
    n=20;
    m=20;
    double** a = new double*[n];
    double** b = new double*[n];
    for (int i=0;i<n;i++){
        a[i] = new double[m];
        b[i] = new double[m];
    }
    for (int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            a[i][j] = i;
            b[i][j] = j;
        }

    double** sumTest = new double*[n];
    for (int i =0;i<n;i++) sumTest[i] = new double[m];
    for (int i =0;i<n;i++)
        for(int j=0;j<m;j++) {
            sumTest[i][j] = a[i][j] + b[i][j];
        }
   sum_arr(a,b,n,m);
    for (int i=0;i<n;i++)
        for (int j = 0;j<m;j++) EXPECT_EQ(a[i][j],sumTest[i][j]);
}

TEST(sumMatrix,na_1_3){
int n,m;
n=20;
m=20;
double** a = new double*[n];

for (int i=0;i<n;i++){
    a[i] = new double[m];
}

for (int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        a[i][j] = i;
    }

double** na_1_3Test = new double*[n];
for (int i =0;i<n;i++) na_1_3Test[i] = new double[m];
for (int i =0;i<n;i++)
    for(int j=0;j<m;j++) {
        na_1_3Test[i][j] = a[i][j] / 3;
    }
na_1_3(a,n,m);
for (int i=0;i<n;i++)
    for (int j = 0;j<m;j++) EXPECT_EQ(a[i][j],na_1_3Test[i][j]);
}

TEST(sumMatrix,na_2){
int n,m;
n=20;
m=20;
double** a = new double*[n];

for (int i=0;i<n;i++){
    a[i] = new double[m];
}

for (int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        a[i][j] = i;
    }

double** na_2Test = new double*[n];
for (int i =0;i<n;i++) na_2Test[i] = new double[m];
for (int i =0;i<n;i++)
    for(int j=0;j<m;j++) {
    na_2Test[i][j] = a[i][j] * 2;
}

na_2(a,n,m);
for (int i=0;i<n;i++)
    for (int j = 0;j<m;j++) EXPECT_EQ(a[i][j],na_2Test[i][j]);
}

TEST(sumMatrix,sum){
int n,m;
n=20;
m=10;
double** a = new double*[n];

for (int i=0;i<n;i++){
    a[i] = new double[m];
}

for (int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        a[i][j] = i;
    }

int sumTest = 0;

for (int i =0;i<n;i++)
    for(int j=0;j<m;j++) {
        sumTest += a[i][j];
    }

EXPECT_EQ(sumForTest(a,n,m),sumTest);
}

TEST(sumMatrix,pr){
int n,m;
n=20;
m=20;
double** a = new double*[n];

for (int i=0;i<n;i++){
    a[i] = new double[m];
}

for (int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        a[i][j] = i;
    }

int prTest = 1;

for (int i =0;i<n;i++)
    for(int j=0;j<m;j++) {
        if(a[i][j]!=0)
        prTest *= a[i][j];
    }

EXPECT_EQ(prForTest(a,n,m),prTest);
}