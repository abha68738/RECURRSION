#include <iostream>
using namespace std;
int re(int st)
{
    if (st < 0)
    {
        return 0;
    }
    if (st == 0)
    {
        return 1;
    }
    // recurrsive call
    int ans = re(st - 1) + re(st - 2);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << re(n);

    return 0;
}