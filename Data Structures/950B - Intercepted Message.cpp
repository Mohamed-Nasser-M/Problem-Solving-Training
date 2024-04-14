/* -----------------  إِنَّا لا نُضِيعُ أَجْرَ مَنْ أَحْسَنَ عَمَلا  ----------------- */
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define ld long double
#define For1(n) for(int i=0; i<n; i++)
#define For2(n) for(int j=0; j<n; j++)
#define test int t; cin >> t; while(t--){solve();}
#define sb << '\n'
#define pi 3.14159265358979323846
using namespace std;
/* **************************************************************** */
void solve() //SOLVE
{
    int n,m,ptr1=0,ptr2=0,sum1=0,sum2=0,ans=0;
    cin >> n >> m;
    int arr[n],arr2[m];
    For1(n) cin >> arr[i];
    For1(m) cin >> arr2[i];
    sum1+=arr[ptr1],sum2+=arr2[ptr2];
    while(ptr1<n && ptr2<m){
        if(sum1==sum2){
            ans++,ptr1++,ptr2++;sum1=arr[ptr1],sum2=arr2[ptr2];
        }else if(sum1<sum2){
            ptr1++;sum1+=arr[ptr1];
        }else{
            ptr2++;sum2+=arr2[ptr2];
        }
    }
    cout << ans;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}