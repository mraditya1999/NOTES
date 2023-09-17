// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    //    while(start < end){
    //     int mid = start+(end-start)/2;

    //     if(arr[mid] < arr[mid+1]){
    //         start = mid + 1;
    //     }
    //     else{
    //         end = mid;
    //     }
    // }

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
}
int main()
{
    int arr[] = {1, 8, 9, 3, 2, 1};
    cout << "Peek element of mountain array is: " << peakIndexInMountainArray(arr, 6);
    return 0;
}
