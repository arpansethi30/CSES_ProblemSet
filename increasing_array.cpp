#include <iostream>
using namespace std;
long long minimum_moves(int n, int arr[])
{
    long long min_moves = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            min_moves += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
        else
        {
            min_moves += 0;
        }
    }
    cout << min_moves;
    return min_moves;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    minimum_moves(n, arr);
}