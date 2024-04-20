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
    int n,x,maxi=0;bool b;
    cin >> n >> x;
    vector<pair<int,int>>vs(n);
    vector<int>ans;
    For1(n){
        cin >> vs[i].first >> vs[i].second;
        if(vs[i].first>maxi)
            maxi=vs[i].first;
        if(vs[i].second>maxi)
            maxi=vs[i].second;
        if(vs[i].second>vs[i].first)
            swap(vs[i].second,vs[i].first);
    }
    for(int i=1; i<=maxi; i++){
        b= true;
        For2(n){
            if(i>vs[j].first || i<vs[j].second){
                b=false;
                break;
            }
        }
        if(b)
        ans.emplace_back(abs(i-x));
    }
    if(!ans.empty()){
        sort(ans.begin(),ans.end());
        cout << ans[0];
    }else
        cout << -1;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}