/* -----------------  إِنَّا لا نُضِيعُ أَجْرَ مَنْ أَحْسَنَ عَمَلا  ----------------- */
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define ld long double
#define For1(n) for(int i=0; i<n; i++)
#define For2(n) for(int j=0; j<n; j++)
#define test int t; cin >> t; while(t--) solve();
#define sb << '\n'
#define pi 3.14159265358979323846
using namespace std;
//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx2,tune=native")
/* **************************************************************** */
void solve() //SOLVE
{
    ll n,m,sum;
    cin >> n >> m;
    int arr[m];
    For1(m) cin >> arr[i];
    sum=arr[0]-1;
    for(int i=1; i<m; i++){
        if(arr[i]<arr[i-1])
            sum+=n-arr[i-1]+arr[i];
        else
            sum+=abs(arr[i]-arr[i-1]);
    }
    cout << sum;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}