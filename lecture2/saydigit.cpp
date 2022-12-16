#include <iostream>
using namespace std;
void say(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    // processing
    int di = n % 10;
    n /= 10;

    // recurrsion
    say(n, arr);
    cout << arr[di] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    cout << endl;
    say(n, arr);
    cout << endl;
    return 0;
}