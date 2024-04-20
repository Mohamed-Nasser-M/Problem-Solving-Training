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
    int n;bool b;
    cin >> n;
    string s[n];
    For1(n) cin >> s[i];
    while(true){
        b= true;
        for(int i=1; i<n-1; i++){
            for(int j=1; j<n-1; j++){
                if(s[j][i]=='#' && s[j+1][i]=='#' && s[j-1][i]=='#' && s[j][i+1]=='#' && s[j][i-1]=='#'){
                    b= false;
                    s[j][i]='.',s[j+1][i]='.',s[j-1][i]='.',s[j][i+1]='.',s[j][i-1]='.';
                }
            }
        }
        if(b) break;
    }
    For1(n){
        For2(n){
            if(s[i][j]=='#'){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}