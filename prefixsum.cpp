#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
int a[n];
int pf[n];

int main()
{
    int b;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        cin >> a[i];
        pf[i] = pf[i - 1] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l - 1] << endl;
    }

    return 0;
}