// find Minimum and Maximum and also find second minimum and second maximum

#include <stdio.h>
 void findMinAndMaxElement(int[],int);

void main()
{
    int arr[1000];
    int n, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
     findMinAndMaxElement(arr,n);
}

void findMinAndMaxElement(int arr[],int len)
{
    int min=arr[0],max=arr[0],sec_max,sec_min,i;

    for(i=0;i<len;i++)
    {
        if(arr[i]>max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }
    sec_min = max;
    sec_max = min;

    for ( i = 0; i < len; i++)
    {
        if(arr[i] < max && arr[i] > sec_max)
        sec_max = arr[i];

        if(arr[i] > min && arr[i] < sec_min)
        sec_min = arr[i];
    }
    
        printf("Min: %d Max: %d\n",min,max);
        printf("Sec_Min: %d Sec_Max: %d",sec_min,sec_max);

}