#include <iostream>
using namespace std;
void sorta(int *arr, int n)
{
    // base case already sorted
    if (n == 0 || n == 1)
    {
        return;
    }
    // solve one case- largest ko end m rhkh dega
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // ecurrsive call
    sorta(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    sorta(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
// do selection selection ans insertion using recurrsion