#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "please enter the value of n" << endl;
    cin >> n;

    int ans = fact(n);
    cout << "Here is the answer : " << endl;
    cout << ans;

    return 0;
}
// base cse hota h to pta h rukna kab h nhi to segmentation
// fault aata h function call tab tak jab tak stack overflow
// nhi ho rha h thats call segmentation error so base case
// is mendatory in recurrsion