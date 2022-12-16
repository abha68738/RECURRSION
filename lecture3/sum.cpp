#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    if (n == 0)
    {
        return 0;
    }

    int remain = sum(arr + 1, n - 1);
    int s = arr[0] + remain;
    return s;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sum(arr, size);
    cout << ans;
    return 0;
}