// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        // If found at mid, then return it
        if (array[mid] == x)
        {
            return mid;
        }
        // Search the left half
        if (array[mid] > x)
        {
            return binarySearch(array, x, low, mid - 1);
        }
        // Search the right half
        return binarySearch(array, x, mid + 1, high);
    }
    return -1;
}

int main(void)
{
    int array[10] = {23, 34, 45, 56, 67, 78, 89, 90, 101, 110};
    int x = 78;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "Element is found at index: " << result << endl;
    }
}