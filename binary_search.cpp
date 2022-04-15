#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    fastio;
    int n;cin>>n;
    int arr[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    int l=1,r=n;
    int x;cin>>x;
    int flag=0;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            cout<<"Found at "<<mid;
            flag=1;
            break;
        }
        else if(arr[mid]>x)
        {
            r=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"Not found";
    }
    return 0;
}