#include <iostream>
using namespace std;
bool binary(int *arr, int s, int e, int k)
{
    // base not found
    if (s > e)
        return false;

    // found
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binary(arr, mid + 1, e, k);
    }
    else
    {
        return binary(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    // 18
    int x;
    cout << "please enter the value of x : " << endl;
    cin >> x;
    bool ans = binary(arr, 0, 6, x);
    if (ans)
    {
        cout << "yess" << endl;
    }
    else
    {
        cout << " noooooo" << endl;
    }

    return 0;
}