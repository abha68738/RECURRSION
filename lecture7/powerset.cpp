#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(int *nums, vector<int> out, int index, vector<vector<int>> &ans)
{
    // base
    if (index >= nums.size())
    {
        ans.push_back(out);
        return;
    }
    // exclude
    solve(nums, out, index + 1, ans);
    int element = nums[index];
    out.push_back(element);
    solve(nums, out, index + 1, ans);
}
int main()
{
    int nums[3] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> out;
    int index = 0;
    solve(nums, out, index, ans);
    cout << ans << endl;
    return 0;
}
// hw do these question via bits