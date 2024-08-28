#include <iostream>
using namespace std;

int repetitions(string dna)
{
    int n = dna.length();
    if (n == 0)
        return 0;

    int max_length = 1;
    int count = 1;
    for (int i = 1; i < n; i++)
    { // Start from 1 since we compare with the previous character
        if (dna[i] == dna[i - 1])
        {
            count++;
            if (count > max_length)
            {
                max_length = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << max_length;
    return max_length;
}

int main()
{
    string dna;
    cin >> dna;
    repetitions(dna);
    return 0;
}
