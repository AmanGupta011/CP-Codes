//example of finding max or min using stl and finding index of element
// in vector. 


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define test(t) int t;cin>>t;while(t--)
#define endl "\n"

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;
    }
}

int main()
{
    fast;
    test(t)
    {
        int n;cin>>n;
        vector<int>v1;
        vector<int>v2;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v1.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            int y;cin>>y;
            v2.push_back(y);
        }

        

        for (int i = 0; i < n; i++)
        {
            int max1 = *max_element(v1.begin(),v1.end());
            int index = getIndex(v1,max1);
            if (max1>v2[index])
            {
                int temp=max1;
                v1[index]=v2[index];
                v2[index]=temp;
                i=0;
            }


        }

        int max1 = *max_element(v1.begin(),v1.end());
        int max2 = *max_element(v2.begin(),v2.end());

        cout<<max1*max2<<endl;
        

        
    }
    return 0;
}