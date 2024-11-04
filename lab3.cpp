    cout << "\nSum of Primary Diagonal Elements: " << primarySum << endl;
    cout << "Sum of Secondary Diagonal Elements: " << secondarySum << endl;

    return 0;
}
// Question no 4
#include <iostream>
using namespace std;

int main() {
    const int dim1 = 3, dim2 = 3, dim3 = 3; // Dimensions of the 3D arrays
    int array1[dim1][dim2][dim3], array2[dim1][dim2][dim3], product[dim1][dim2][dim3];

    cout << "Enter elements of the first 3x3x3 array:" << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "array1[" << i << "][" << j << "][" << k << "]: ";
                cin >> array1[i][j][k];
            }
        }
    }

    cout << "\nEnter elements of the second 3x3x3 array:" << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "array2[" << i << "][" << j << "][" << k << "]: ";
                cin >> array2[i][j][k];
            }
        }
    }

    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                product[i][j][k] = array1[i][j][k] * array2[i][j][k];
            }
        }
    }

    cout << "\nResulting Product Array:" << endl;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                cout << "product[" << i << "][" << j << "][" << k << "] = " << product[i][j][k] << endl;
            }
        }
    }

    return 0;
}
// Question no 5
#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}