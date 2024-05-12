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
    int n,m,maxi=0,mini=0;
    cin >> n >> m;
    deque<int>arr(m),arr2(m);
    For1(m){cin >> arr[i]; arr2[i]=arr[i];}
    For1(n){
        sort(arr.begin(),arr.end());
        maxi+=arr[m-1],arr[m-1]--;
    }
    For1(n){
        sort(arr2.begin(),arr2.end());
        mini+=arr2[0],arr2[0]--;
        if(!arr2[0]) arr2.pop_front();
    }
    cout << maxi << ' ' << mini;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}