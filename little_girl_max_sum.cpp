// The problem stement is below
// https://codeforces.com/problemset/problem/276/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long int> ind(n,0);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        ind[l]++;
        if(r+1<n)
        {
            ind[r+1]--;
        }
    }
    for(int i=1;i<n;i++)
    {
        ind[i]+=ind[i-1];
    }
    sort(ind.begin(),ind.end());
    sort(arr.begin(),arr.end());
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=arr[i]*ind[i];
        cout<<arr[i]<<" "<<ind[i]<<" "<<ans<<endl;
    }
    cout<<ans;
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    return 0;
}

// 5 3
// 56 38 24 77 98
// 1 5
// 2 3
// 2 4