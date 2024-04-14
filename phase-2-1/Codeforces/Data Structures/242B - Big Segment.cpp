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
/* **************************************************************** */
void solve() //SOLVE
{
    ll n,mini,maxi;
    cin >> n;
    pair<int,int>pr[n],pr2[n];
    For1(n){
        cin >> pr[i].first >> pr[i].second;
        pr2[i].first=pr[i].first,pr2[i].second=pr[i].second;
    }
    sort(pr,pr+n);
    mini=pr[0].first;
    For1(n) swap(pr[i].first,pr[i].second);
    sort(pr,pr+n);
    maxi=pr[n-1].first;
    For1(n) swap(pr[i].first,pr[i].second);
    For1(n){
        if(pr2[i].first<=mini && pr2[i].second>=maxi){
            cout << i+1;
            return;
        }
    }
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