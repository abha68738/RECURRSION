#include <iostream>
using namespace std;
void pri(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
bool find(int arr[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == x)
    {
        return true;
    }
    else
    {
        pri(arr, n);
        bool ans = find(arr + 1, n - 1, x);

        return ans;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int x;
    cout << "please enter the value of x : " << endl;
    cin >> x;
    int ans = find(arr, size, x);
    cout << ans;
    return 0;
}
