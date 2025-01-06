// Write a program of to sort the array using templates
#include <iostream>
using namespace std;
template <class T>
void sort(T array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] > array[j]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int array[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    sort(array, size);

    cout << "Sorted array:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

}
