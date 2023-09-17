// Count no. of positive and negative numbers in an array
#include <iostream>
using namespace std;

void countFrequency(int[], int);

int main()
{
    int arr[100];
    int size;

    cout << "Enter no. of elements in Array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    countFrequency(arr, size);
    return 0;
}

void countFrequency(int arr[], int n)
{
    int positiveCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positiveCount++;
        else
            negativeCount++;
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}