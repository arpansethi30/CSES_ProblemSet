#include <iostream>

using namespace std;

long CalculateWays(int k)
{
    long total_ways = ((long)k * k * k * (k - 1)) / 2;
    long way_attack = 4 * (k - 1) * (k - 2);
    long ans = total_ways - way_attack;
    return ans;
}

int main()
{
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        cout << CalculateWays(i) << endl;
    }
    return 0;
}

// total numbers of way to placed two knights on a k*k chessboard
// for knight one n^2
// for second night n^2-1
// total value of placement = n^2(n^2 - 1)/2
// total number of ways two nigth attack each other =