// Title: Basic Pointer
// Purpose: output element in array using pointer
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int size = 0;
    double *ptr = nullptr;
    cout << endl << "Set size of array: ";
    cin >> size;
    cout << endl;
    double numbers[size];
    ptr = numbers;
    cout << "Set " << size << " element/s in array (double):" << endl;

    for (size_t i = 0; i < size; ++i) {
        cout << i + 1 << "| ";
        cin >> numbers[i];
    }
    cout << endl;
    for (size_t i = 0; i < size; ++i)
    {
        cout << "At index " << i << " is " << *(ptr+i) << " with address " << ptr+i << endl;
    }
    return 0;
}
