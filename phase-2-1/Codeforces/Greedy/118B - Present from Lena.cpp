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
    int n;
    cin >> n;
    vector<deque<int>>vs;
    For1(n+1){
        vs.emplace_back();
        vs.back().emplace_back(i);
        for(int j=i-1; j>=0; j--)
            vs.back().push_front(j),vs.back().push_back(j);
    }
    For1(vs.size()){
        For2(n*2+1-vs[i].size())
            cout << ' ';
        For2(vs[i].size())
            if(j==0)
                cout << vs[i][j];
            else
                cout << ' ' << vs[i][j] ;
        cout sb;
    }
    for(int i=vs.size()-2; i>=0; i--){
        For2(n*2+1-vs[i].size())
            cout << ' ';
        For2(vs[i].size())
            if(j==0)
                cout << vs[i][j];
            else
                cout << ' ' << vs[i][j] ;
        cout sb;
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