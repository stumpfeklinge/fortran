#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
void matrix_multiply(int **A, int **B, int **C, int size) {
for (int k = 0; k < size; ++k) {
for (int j = 0; j < size; ++j) {
for (int i = 0;i < size; ++i){
C[i][j] += A[i][k] * B[k][j];
}
}
}
}
int main() {
cout«"Введите размер матрицы: ";
int size ;
cin»size;
// Инициализация матриц A, B, C
int **A,**B,**C;
A = new int *[size];
B = new int *[size];
C = new int *[size];
for (int i = 0; i < size; i++){
1A[i] = new int[size];
B[i] = new int[size];
C[i] = new int[size];
}
for(int i=0;i<size;i++){
for (int j=0;j<size;j++){
A[i][j]=rand() %100 +-100;
B[i][j]=rand() %100 +-100;
C[i][j]=0;
}
}
auto start = high_resolution_clock::now();
matrix_multiply(A, B, C, size);
auto stop = high_resolution_clock::now();
auto duration = duration_cast<milliseconds>(stop - start);
cout « "Время выполнения: " « duration.count() « " миллисекунд" « endl;
return 0;
}
