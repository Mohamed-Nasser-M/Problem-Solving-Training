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
    int n,m;ll sum=0;
    cin >> n >> m;
    vector<pair<int,int>>vs(m);
    For1(m) cin >> vs[i].second >> vs[i].first;
    sort(vs.begin(),vs.end());
    for(int i=m-1; i>=0 && n; i--){
        sum+=min(n,vs[i].second)*vs[i].first;
        n-=min(n,vs[i].second);
    }
    cout << sum sb;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}