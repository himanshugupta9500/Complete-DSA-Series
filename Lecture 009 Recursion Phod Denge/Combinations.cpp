

void solve(int i, int n, vector<vector<int>> &ans, vector<int> &temp, int k)
{
    // Base Case
    if (k == 0)
    {
        ans.push_back(temp);
        return;
    }
    // second base case
    if (i > n)
        return;

    // conditions
    if (k > n - i + 1)
        return;

    // pick
    temp.push_back(i);

    // Ask Recursion to do the Rest of the Task
    solve(i + 1, n, ans, temp, k - 1);

    // Not pick
    temp.pop_back();

    // Ask Recursion to do the Rest of the Task
    solve(i + 1, n, ans, temp, k);
}

vector<vector<int>> combinations(int n, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(1, n, ans, temp, k);
    return ans;
}

/*
Time Complexity  : O(2^N)
Space Complexity : O(N)
*/