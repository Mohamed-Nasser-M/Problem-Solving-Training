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
vector<vector<int>>vs;
ll n,l,r,x,sum=0,cum=0;
void findSubsets(int nums[])
{
    for (int i = 0; i < (1 << n); i++) {
        vs.emplace_back();
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                vs.back().emplace_back(nums[j]);
            }
        }
        if(vs.back().size()<2)
            vs.pop_back();
        else
            sort(vs.back().begin(), vs.back().end());
    }
}
void solve() //SOLVE
{

    cin >> n >> l >> r >> x;
    int arr[n];
    For1(n) cin >> arr[i];
    findSubsets(arr);
    For1(vs.size()){
        cum=0;
        For2(vs[i].size()){
            cum+=vs[i][j];
        }
        if(cum<l || cum>r || vs[i].back()-vs[i].front()<x) continue;
        sum++;
    }
    cout << sum sb;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}