#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void TwoSets(int n)
{
    ll sum = (ll)n * (n + 1) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<int> set1, set2;
    ll target = sum / 2;

    // Fill set1 with numbers from n downwards until we reach or exceed target
    for (int i = n; i > 0; i--)
    {
        if (target >= i)
        {
            set1.push_back(i);
            target -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    // Print set1
    cout << set1.size() << "\n";
    for (int num : set1)
    {
        cout << num << " ";
    }
    cout << "\n";

    // Print set2
    cout << set2.size() << "\n";
    for (int num : set2)
    {
        cout << num << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    TwoSets(n);
    return 0;
}