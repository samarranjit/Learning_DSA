#include <iostream>
using namespace std;
// Function to print an array

int main()
{

    // Finding the minimum value in an array
    int arr[] = {7, 12, 9, 4, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    cout << "Minimum value in the array is: " << minVal << endl;

    return 0;
}