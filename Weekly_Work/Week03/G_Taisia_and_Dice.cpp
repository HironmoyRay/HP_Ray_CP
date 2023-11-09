// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while (t--)
//     {
//         int n,s,r; cin>>n>>s>>r;

//         int max=s-r;
//         cout<<max<<" ";
//         n--;

//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             a[i]=1;
//         }
        
//         r=r-n; //That is important. count of r is the main funda.

//         int idx=0;
//         for (int i = 0; i < r; i++)
//         {
//             if(a[idx]!=max){
//                 a[idx]++;
//             }
//             else{
//                 idx++;
//                 a[idx]++;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout<<a[i]<<" ";
//         }
//         cout<<endl;
        

//     }
    
//     return 0;
// }


//Another Way to solve.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,s,r; cin>>n>>s>>r;
        int mx=s-r;
        cout<<mx<<" ";
        n--;
        
        if(r%n==0){
            for (int i = 0; i < n; i++)
            {
                cout<<r/n<<" ";
            }
            
        }
        else{
            int temp=r%n;
            for (int i = 0; i < temp; i++)
            {
                cout<<(r/n)+1<<" ";
            }
            for (int i = 0; i < n-temp; i++)
            {
                cout<<r/n<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}