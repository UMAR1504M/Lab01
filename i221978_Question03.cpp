#include <iostream>
using namespace std;
//Function to input
void input(int** ptr, int row, int col) {
    cout << "Enter elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> ptr[i][j];
        }
    }
}
//Function to output
void output(int** ptr, int row, int col) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}
//Function to calculate sum
int Sum(int** ptr, int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += ptr[i][j];
        }
    }
    return sum;
}
//Function to calculate row sum
void rowSum(int** ptr, int row, int col) {
    for (int i = 0; i < row; i++) {
        int rsum = 0;
        for (int j = 0; j < col; j++) {
            rsum += ptr[i][j];
        }
        cout << "Sum of row " << i + 1 << " is: " << rsum << endl;
    }
}
//Function to calculate calculate sum
void columnSum(int** ptr, int row, int col) {
    for (int i = 0; i < col; i++) {
        int csum = 0;
        for (int j = 0; j < row; j++) {
            csum += ptr[j][i];
        }
        cout << "Sum of column " << i + 1 << " is: " << csum << endl;
    }
}
//Function to calculate transpose
void transpose(int** ptr, int row, int col) {
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << ptr[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;
    //Dynamically allocating the memory
    int** ptr = new int* [row];
    for (int i = 0; i < row; i++) {
        ptr[i] = new int[col];
    }

    input(ptr, row, col);
    output(ptr, row, col);

    int sum = Sum(ptr, row, col);
    cout << "Sum of all elements: " << sum << endl;

    rowSum(ptr, row, col);
    columnSum(ptr, row, col);

    transpose(ptr, row, col);

    // Deallocation of memory
    for (int i = 0; i < row; i++) {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}