#include <iostream>
using namespace std;
void ans(int src, int dest)
{
    // base case
    if (src == dest)
    {
        cout << "reached" << endl;
        return;
    }
    //processing
    src++;
    // recurrsive call
    ans(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    ans(src, dest);

    return 0;
}
// ek case solve baki apne aap recurrsive call se solve
// base case ka idea hona chahiye