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
    int n;
    cin >> n;
    vector<pair<string,string>>vs(n),ans;
    For1(n) cin >> vs[i].first >> vs[i].second;
    for(int i=n-1; i>=0; i--){
        if(vs[i].first==vs[i].second) continue;
        ans.emplace_back(vs[i]);
        vs[i].first=vs[i].second;
        for(int j=i-1; j>=0; j--){
            if(vs[j].second==ans.back().first){
                ans.back().first=vs[j].first;
                vs[j].first=vs[j].second;
            }
        }
    }
    cout << ans.size() sb;
    For1(ans.size()){
        cout << ans[i].first << ' ' << ans[i].second sb;
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