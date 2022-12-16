#include <iostream>
using namespace std;
bool sort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = sort(arr + 1, n - 1);
        return ans;
    }
}
int main()
{
    int arr[10] = {2, 4, 5, 6, 7};
    int size = 5;
    bool ans = sort(arr, size);
    if (ans)
    {
        cout << "sorted";
    }
    else
    {
        cout << "not";
    }
    return 0;
}