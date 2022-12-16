#include <iostream>
using namespace std;
void rev(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(str[i++], str[j--]);
    rev(str, i, j);
}
int main()
{
    string name;
    cout << "please enter the string" << endl;
    cin >> name;
    rev(name, 0, name.size() - 1);
    cout << name << endl;
    return 0;
}
// single pointer n-i-1;