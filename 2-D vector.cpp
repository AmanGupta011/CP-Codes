#include <bits/stdc++.h>
using namespace std;

// vector of vector or 2-D vector
// this code will help in storing dynamic sized rows and columns
/* sample input
3
4
1 2 3 4
2
5 6
7
7 8 9 1 2 3 4
*/


int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        
        vector<int> temp;   //temporary vector to store data
        int x;
        cin >> x;

        for (int j = 0; j < x; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        v.push_back(temp);  // pushing temp vector into v vector
    }

    // printing the data of vector using matrix indices
    
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}