#include <iostream>
using namespace std;

// Function to compute and print the transpose of a matrix
void transposeMatrix(int mat[][100], int row, int col) {
    int transposedMatrix[col][row];

    // Compute the transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposedMatrix[j][i] = mat[i][j];
        }
    }

    // Print the transpose
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, col;

    cout << "Enter the number of rows in the matrix: ";
    cin >> row;
    cout << "Enter the number of columns in the matrix: ";
    cin >> col;

    int matrix[100][100];

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the transposeMatrix function to compute and print the transpose
    transposeMatrix(matrix, row, col);

    return 0;
}

