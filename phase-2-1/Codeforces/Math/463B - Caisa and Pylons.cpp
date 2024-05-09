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
    int n,Energy=0,sum;
    cin >> n;
    int arr[n+1];arr[0]=0;
    For1(n) cin >> arr[i+1];sum=arr[1];
    for(int i=2; i<=n; i++)
        if(arr[i]<=arr[i-1]) Energy+=arr[i-1]-arr[i];
        else if(Energy>=arr[i]-arr[i-1]) Energy-=arr[i]-arr[i-1];
        else{sum+=arr[i]-arr[i-1]-Energy;Energy=0;}
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