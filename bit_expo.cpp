#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int bit_ex(int a, int b)
{
    if (b == 0)
        return 1;
    long long x = bit_ex(a, b / 2);

    if (b & 1)
    {
        return ((a * 1LL) * (x * x) % mod) % mod;
    }
    else
    {
        return (x * x) % mod;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << bit_ex(x, y);
}

// 1.125e15

// 898961331