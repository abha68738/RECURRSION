#include <iostream>

using namespace std;
int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    // recurrsion
    int ans = pow(a, b / 2);
    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}
int main()
{

    int a, b;
    cin >> a >> b;
    int ans = pow(a, b);
    cout << "ans is :" << ans << endl;

    return 0;
}