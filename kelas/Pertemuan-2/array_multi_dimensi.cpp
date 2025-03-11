#include <iostream>
using namespace std;

int main() {
    int matriks[2][2] = {
        {1, 2},
        {3, 4}
    };

    cout << matriks[0][0] << endl;
    
    int arr[3][3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << arr[0][0][0] << endl;
}