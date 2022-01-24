#include <algorithm>
#include <iostream>
using namespace std;
  
int main()
{
    int arr[] = { 22, 43, 25, 77, 83 };
  
    int size = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
  
    reverse(arr, arr + size);

    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}