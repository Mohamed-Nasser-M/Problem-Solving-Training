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
    int n,m;string a,b;
    cin >> n >> m >> a >> b;
    vector<pair<int,vector<int>>>vs;
    for(int i=0; i<=b.size()-a.size(); i++){
        vs.push_back({0, {}});
        for(int j=i; j<a.size()+i; j++){
            if(a[j-i]!=b[j])
                vs.back().first++,vs.back().second.emplace_back(j-i+1);
        }
    }
    sort(vs.begin(), vs.end());
    cout << vs[0].first sb;
    For1(vs.front().second.size()) cout << vs.front().second[i] << ' ';
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}