#include <iostream>

using namespace std;
bool pal(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return pal(str, i++, j++);
    }
}
int main()
{
    string abc;
    cin >> abc;

    bool ispal = pal(abc, 0, abc.length() - 1);
    if (ispal)
    {
        cout << "yes it is pal" << endl;
    }
    else
    {
        cout << "no";
    }
    return 0;
}

// do it only with one pointer