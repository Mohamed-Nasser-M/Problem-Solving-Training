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
    int n,m;string s;
    cin >> n >> m;
    pair<string,string>arr[m];
    For1(m)
        cin >> arr[i].first >> arr[i].second;
    For1(n){
        cin >> s;
        For2(m){
            if(arr[j].first==s){
                if(arr[j].first.size()<=arr[j].second.size())
                    cout << arr[j].first;
                else
                    cout << arr[j].second;
                cout << ' ';
                break;
            }
        }
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