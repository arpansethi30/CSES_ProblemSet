#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

ll find_min_diff(int index, ll sum1, ll sum2, int n, vector<ll> &weights)
{
    // Base case: if we've used all apples
    if (index == n)
    {
        return abs(sum1 - sum2);
    }

    // Try adding current apple to first group
    ll diff1 = find_min_diff(index + 1, sum1 + weights[index], sum2, n, weights);

    // Try adding current apple to second group
    ll diff2 = find_min_diff(index + 1, sum1, sum2 + weights[index], n, weights);

    // Return minimum of both choices
    return min(diff1, diff2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    ll result = find_min_diff(0, 0, 0, n, weights);
    cout << result << "\n";

    return 0;
}