#include <iostream>
using namespace std;

long long missing_num(int n, long long arr[])
{
    long long num = 0;
    long long sum = 0;
    long long total_sum = 0;

    // Calculate the expected sum using long long to prevent overflow
    sum = ((long long)n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        total_sum += arr[i];
    }

    num = sum - total_sum;
    cout << num << endl;

    return num;
}

int main()
{
    int n;
    cin >> n;
    long long *arr = new long long[n - 1]; // Dynamically allocate memory to handle potentially large array sizes
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    missing_num(n, arr);
    delete[] arr; // Free the allocated memory
    return 0;
}
