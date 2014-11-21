#include "header.h"
#include <fstream>
using namespace std;

void l5() {

    using namespace std;
    
    // Відкрити файл тільки для читання
    ofstream out("tst4.txt", ios::out);
    out << "hello";
    
    ifstream in("input.txt");
    
    if(!in)
    {
        cerr << "Не можу відкрити вхідний файл!";
    }
    
    int n, m;
    
    in >> n >> m;
    
    // Створити матрицю
    int** mat = new int* [n];
    for(int i = 0; i < n; ++i)
        mat[i] = new int[m];
    
    // Прочитати матрицю з файлу
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            in >> mat[i][j];
    
    double sum = 0;
    
    // Знайти суму всіх елементів матриці
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            sum += mat[i][j];
    
    // Відкрити файл для запису
//    ofstream out("tst4.out");
    
    if(!out)
    {
        cerr << "Не можу відкрити вихідний файл!";
    }
    
    
    // Записати матрицю з коефіцієнтами розділеними на суму її елементів
    for(int i = 0; i < n; ++i, out << endl)
        for(int j = 0; j < m; ++j)
            out << '\t' << mat[i][j] / sum;


}