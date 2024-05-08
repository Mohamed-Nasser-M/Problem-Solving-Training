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
    int n,cur;
    cin >> n;
    vector<pair<int,int>>vs(n);
    For1(n) cin >> vs[i].first >> vs[i].second;
    cur=max(vs[0].first,vs[0].second);
    for(int i=1; i<n; i++){
        if(max(vs[i].first,vs[i].second)<=cur)
            cur=max(vs[i].first,vs[i].second);
        else if(min(vs[i].first,vs[i].second)<=cur)
            cur=min(vs[i].first,vs[i].second);
        else{
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}