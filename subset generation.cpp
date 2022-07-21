#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> bitform(int a)
{
	vector<int>v;
    while(a)
    {
        int rightmost_bit=a&1;
        a=a>>1;
        v.push_back(rightmost_bit);
    }
	return v;
}

int main()
{
	ll t;cin>>t;
	while(t--)
	{
	int n;cin>>n;
	char arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	vector<vector<int>>ans;
	for (int i = 0; i < pow(2,n); i++)
	{
		vector<int>v=bitform(i);
		if(v.size()==0) 
		{
			ans.push_back({});
			continue;
		}
		else{
			vector<int>ppp;
			for (int i = 0; i < v.size(); i++)
			{
				if(v[i]==1) ppp.push_back(arr[i]);
				else continue;
			}
			ans.push_back(ppp);
		}
	}
	cout<<ans.size()<<endl; // the first vector in ans is empty
	for(auto pr:ans)
	{
		string s;
		for(auto xy:pr)
		{
			s+=char(xy);
		}
		cout<<s<<endl;
	}
	
	}
	return 0;
}
