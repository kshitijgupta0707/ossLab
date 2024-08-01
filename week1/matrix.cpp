#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    int transpose[cols][rows]; // Transposed matrix dimensions

    // Input matrix elements
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Calculate the transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
