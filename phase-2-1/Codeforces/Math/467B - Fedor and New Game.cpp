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
    int n,m,k,sum=0,K;bool b;
    cin >> n >> m >> k;
    int arr[m+1];
    For1(m+1) cin >> arr[i];
    For1(m){
        bitset<20>bt(arr[i]),bt2(arr[m]);K=k+1,b= true;
        for(int j=19; j>=0; j--){
            if(bt.to_string()[j]!=bt2.to_string()[j])
                K--;
            if(!K){b= false;break;}
        }
        if(b) sum++;
    }
    cout << sum;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}