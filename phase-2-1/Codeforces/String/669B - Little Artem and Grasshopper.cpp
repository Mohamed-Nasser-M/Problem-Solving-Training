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
    int n;string s;
    cin >> n >> s;
    bool arr[n];int d[n];
    memset(arr,false,n);
    For1(n) cin >> d[i];
    for(int i=0;;){
        if(arr[i]){cout << "INFINITE";return;}
        arr[i]= true;
        if(s[i]=='>') i+=d[i];
        else i-=d[i];
        if(i<0 || i>=n){cout << "FINITE";return;}
    }
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}