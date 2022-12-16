// fastest sorting algo rithum
#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *sec = new int[len2];
    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    for (int i = 0; i < len1; i++)
    {
        sec[i] = arr[k++];
    }
    // merge
    int index1 = 0;
    int index2 = 0;
    k = s;
    // k is mainarray index
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < sec[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = sec[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = sec[index2++];
    }
    delete[] first;
    delete[] sec;
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    int mid = s + (e - s) / 2;
    if (s >= e)
    {
        return;
    }
    // left part sort
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid + 1, e);
    // merge
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {2, 3, 6, 1, 2};
    int n = 5;

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
//inversion count poblem
//gfg p padhna
