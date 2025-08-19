#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], index;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter index to remove: ";
    cin >> index;

    if (index < 0 || index >= n)
    {
        cout << "Invalid index!\n";
        return 0;
    }

    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "The array after removing element is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}