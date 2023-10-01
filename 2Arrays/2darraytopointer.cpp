#include <iostream>
using namespace std;

//const for static array 
const int col = 4;

void storeArray(int (*)[col], int , int );
void printArray(int (*)[col], int , int );
 int maxOfArray(int (*)[col], int , int );
 int minOfArray(int (*)[col], int , int );
 int AvgOfArray(int (*)[col], int , int );
 int sumOfArray(int (*)[col], int , int );
void search(int (*)[col], int , int , int , int *);
void sumArrays(int (*)[col], int (*)[col], int (*)[col], int , int );


int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Array of rows and columns
    int arr[rows][col];

    // Pointer to array
    int (*p)[col] = arr;
    int exit =1;
    do {

        cout << "\nMenu:\n1. Store Array\n2. Print Array\n3. Find Maximum\n4. Find Minimum\n5. Find Average\n6. Find Sum\n7. Search Element\n8. Sum Two Arrays\n9. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                {
                    storeArray(p, rows, col);
                }
                break;
            case 2:
                {
                    printArray(p, rows, col);
                }
                break;
            case 3:
                {
                    cout << "Max Element is: " << maxOfArray(p, rows, col) << endl;
                }
                break;
            case 4:
                {
                    cout << "Min Element is: " << minOfArray(p, rows, col) << endl;
                }
                break;
            case 5:
                {
                    cout << "Average Element is: " << AvgOfArray(p, rows, col) << endl;
                }
                break;
            case 6:
                {
                    cout << "Sum Element is: " << sumOfArray(p, rows, col) << endl;
                }
                break;
            case 7:
                {
                    int key;
                    int array[2];
                    cout << "Enter the number you want to search for: ";
                    cin >> key;
                    search(p, rows, col, key, array);
                    if (array[0] != -1 && array[1] != -1) {
                        cout << "Found at index i = " << array[0] << ", j = " << array[1] << endl;
                    } else {
                        cout << "Not found." << endl;
                    }
                }
                break;
            case 8:
                {
                    // Array for the second input
                    int arr2[rows][col];
                    int (*q)[col] = arr2;

                    storeArray(q, rows, col);
                    
                    // Array for the result
                    int result[rows][col];
                    sumArrays(p, q, result, rows, col);

                    cout << "Sum of the two arrays:" << endl;
                    printArray(result, rows, col);
                }
                break;
            case 9:
                exit=0;
            default:
                {
                    cout << "Invalid choice. Please try again." << endl;
                }
                break;
        }
    } while (exit != 0);

    return 0;
}

void storeArray(int (*ptr)[col], int rows, int col) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element at row " << i << " column " << j << ": ";
            cin >> ptr[i][j];
        }
        cout << endl;
    }
}

void printArray(int (*ptr)[col], int rows, int col) {
    cout << "The array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
}

int maxOfArray(int (*ptr)[col], int rows, int col) {
    int max = ptr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (max < ptr[i][j]) {
                max = ptr[i][j];
            }
        }
    }
    return max;
}

int minOfArray(int (*ptr)[col], int rows, int col) {
    int min = ptr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (min > ptr[i][j]) {
                min = ptr[i][j];
            }
        }
    }
    return min;
}

int AvgOfArray(int (*ptr)[col], int rows, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            sum += ptr[i][j];
        }
    }
    return sum / (rows * col);
}

int sumOfArray(int (*ptr)[col], int rows, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            sum += ptr[i][j];
        }
    }
    return sum;
}

void search(int (*ptr)[col], int rows, int col, int key, int *arr) {
    arr[0] = -1; // Initialize indices to -1 (not found)
    arr[1] = -1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (key == ptr[i][j]) {
                arr[0] = i;
                arr[1] = j;
                return; // Exit the function if found
            }
        }
    }
}

void sumArrays(int (*arr1)[col], int (*arr2)[col], int (*result)[col], int rows, int col) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}




