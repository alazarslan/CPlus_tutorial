#include <iostream>
using namespace std;
int main() {
/*
    int rows = 3, cols = 4;

    // 1️⃣ Satır işaretçileri için yer ayır (array of pointers)
    int** matrix = new int*[rows];

    // 2️⃣ Her satır için sütunları ayır
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // 3️⃣ Matrise değer atama ve yazdırma
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // 4️⃣ Belleği temizleme (önce satırları, sonra ana pointer)
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];  // Satırları sil
    }
    delete[] matrix;  // Ana pointeri sil
*/
    float *pArr = NULL;
    delete pArr;
    return 0;
}