//longest-sub-array-with-sum-k
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int lenOfLongSubarr(int a[], int n, int s){
        map<int , int > mp;
        int j=0;
        int sum=0;
        int ans=0;

        while (j<n)
        {
            sum=sum+a[j];
            if(mp.find(sum)==mp.end()) // if same prefix sum find in the array, get store the first sum value .Exm: [-3 1 0 0 4] 
            {
                mp[sum]=j;
            }
            if(sum==s) // if directly found s
            {
                ans=max(ans,j+1);
            }
            else if(mp.find(sum-s)!=mp.end()) //if directly not found but found inside the array
            {
                int i=mp[sum-s];
                ans=max(ans,j-i); // getting the longest array
            }
            j++;
        }
        return ans;
    }
}; 
int main()
{
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s; cin>>s;

    solution subArray;
    cout<<subArray.lenOfLongSubarr( a,n,s)<<endl;
    return 0;
}

