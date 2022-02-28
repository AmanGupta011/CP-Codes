// finding GCD of the remaining array after deleting xth element
// using precomputation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int prefixGCD[n+1],suffixGCD[n+1];

    // creating PrefixGCD array
    prefixGCD[0]=0;
    for (int i = 1; i <= n; i++)
    {
        prefixGCD[i]=__gcd(prefixGCD[i-1],arr[i]);
    }

    // printing PrefixGCD array
    for (int i = 1; i <=n; i++)
    {
        cout<<prefixGCD[i]<<" ";
    }
    cout<<endl;

    // creating SuffixGCD array
    suffixGCD[n]=arr[n];suffixGCD[0]=0;

    for (int i = n-1; i >=1; i--)
    {
        suffixGCD[i]=__gcd(suffixGCD[i+1],arr[i]);
    }

    // printing SuffixGCD array
    for (int i = 1; i <=n; i++)
    {
        cout<<suffixGCD[i]<<" ";
    }
    cout<<endl;
    
    // test cases
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x; //here x considers 1 based indexing
        int gcd = __gcd( prefixGCD[x-1],suffixGCD[x+1] );
        cout<<gcd<<endl;
    }
    

    
    return 0;
}