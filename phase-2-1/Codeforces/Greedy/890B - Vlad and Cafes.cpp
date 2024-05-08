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
int freq[1000000],cnt[1000000],ans;
void solve() //SOLVE
{
    int n;
    cin >> n;
    int arr[n];
    vector<int>vs;
    For1(n){
        cin >> arr[i];
        vs.emplace_back(arr[i]);
        if(cnt[arr[i]]){
            vs[freq[arr[i]]]=-1;
        }
        cnt[arr[i]]++;
        freq[arr[i]]=i;
    }
    for(int i=vs.size()-1; i>=0; i--){
        if(vs[i]>-1)
            ans=vs[i];
    }
    cout << ans;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}