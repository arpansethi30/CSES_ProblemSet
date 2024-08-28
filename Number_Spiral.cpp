#include <iostream>
#include <cstdint>

using namespace std;

int getNumber(int y, int x)
{

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y, x;
        cin >> y >> x;
        cout << getNumber(y, x) << endl;
    }
    return 0;
}