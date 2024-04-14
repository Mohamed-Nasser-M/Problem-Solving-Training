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
int arr2[100001];
void solve() //SOLVE
{
    ll n,q,qu,a=0,b=0;
    cin >> n;
    int arr[n];
    map<int,int>mp;
    For1(n){
        cin >> arr[i];
        mp.insert({arr[i],i});
    }
    cin >> q;
    while(q--){
        cin >> qu;
        a+=mp[qu]+1;
        b+=n-mp[qu];
    }
    cout << a << ' ' << b;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}