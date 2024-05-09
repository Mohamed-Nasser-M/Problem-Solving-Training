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
struct col{
    int l,r,sum;
};
void solve() //SOLVE
{
    int n,R=0,L=0;
    cin >> n;
    vector<col>vs(n);
    vector<pair<int,int>>ans;
    For1(n){
        cin >> vs[i].l >> vs[i].r;
        L+=vs[i].l,R+=vs[i].r;
    }
    For1(n){
        if(abs(L+vs[i].r-vs[i].l-(R+vs[i].l-vs[i].r))>abs(L-R))
            ans.emplace_back(abs(L+vs[i].r-vs[i].l-(R+vs[i].l-vs[i].r)),i+1);
    }
    if(ans.empty()){cout << 0;return;}
    sort(ans.begin(),ans.end());
    cout << ans.back().second;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}