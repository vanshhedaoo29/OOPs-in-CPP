#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get the size of the 2D array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array
    int array[rows][cols];

    // Input elements into the 2D array
    cout << "Enter elements for the " << rows << "x" << cols << " array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Display the 2D array
    cout << "\nThe 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
