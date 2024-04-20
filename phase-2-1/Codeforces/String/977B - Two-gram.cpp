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
//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx2,tune=native")
/* **************************************************************** */
void solve() //SOLVE
{
    int n;string s,str;
    cin >> n >> s;
    map<string,int>mp;
    For1(n-1){
        str="";str+=s[i];str+=s[i+1];
        mp[str]++;
    }
    vector<pair<int,string>>vs;
    for(const auto& it:mp)
        vs.emplace_back(it.second,it.first);
    sort(vs.begin(),vs.end());
    cout << vs.back().second;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}