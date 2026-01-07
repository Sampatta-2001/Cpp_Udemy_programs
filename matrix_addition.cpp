#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the rows and cols: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], C[rows][cols];

    cout << "Enter the array elements: ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j] >> B[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << C[i][j];
        }
        cout << " ";
    }
    return 0;
}