#include "header.h"
#include <fstream>
using namespace std;

void l5() {
    ifstream in("input.txt");
    
    if(!in) {
        cerr << "Can`t open the file!";
    }
    int n, m;
    in >> n >> m;
    
    // New array
    int** mat = new int* [n];
    for(int i = 0; i < n; ++i)
        mat[i] = new int[m];
    
    // Read array
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            in >> mat[i][j];
    
    double sum = 0;
    
    // The aum of array elements
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            sum += mat[i][j];
    
    // Open file
    ofstream out("tst4.out");
    out << "text";
    
    if(!out) {
        cerr << "Can`t open the file!";
    }
    
    for(int i = 0; i < n; ++i, out << endl)
        for(int j = 0; j < m; ++j)
            out << '\t' << mat[i][j] / sum;
    
    cout << "\n\nThe end." << endl;
    quit();
}