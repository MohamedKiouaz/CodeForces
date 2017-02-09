#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, temp, max = 1;
    vector<int> liste;
    cin >> n;

    for(int i = 0; i<n; i++) {
        cin >> temp;
        liste.push_back(temp);
    }

    sort(liste.begin(), liste.end());

    std::vector<unsigned long> numbers;
    unsigned long maximum = liste[n-1];
    for (unsigned long i = 2; i <= maximum; ++i)
    {
        if (numbers.empty())
        {
            numbers.push_back(i);
            continue;
        }

        if (std::none_of(numbers.begin(), numbers.end(), [&](unsigned long p)
        {
            return i % p == 0;
        }))
        {
            numbers.push_back(i);
        }

    }

    for(int i = 0; i < numbers.size(); i++) {
        temp = 0;
        for(int j = 0; j < n and (n - j + temp > max); j++)
                temp += liste[j] % numbers[i] == 0 ? 1 : 0;
        max = temp > max ? temp : max;
    }
    cout << max << endl;
}
