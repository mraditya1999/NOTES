// You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.

// Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after
// rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].

// Now, your task is to find the index at which ‘K’ is present in ARR.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            start = mid + 1;

        else if (arr[mid] > key)
            end = mid - 1;
    }
    return -1;
}

int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3};
    int key = 2;
    int n = 6;
    int pivot = getPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
    cout << "Pivot element is on index: " << getPivot(arr, 6);
    return 0;
}
