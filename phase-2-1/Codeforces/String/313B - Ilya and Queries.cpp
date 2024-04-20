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
    string s;
    cin >> s;
    int part[s.size()+1],q,q1,q2;
    memset(part,0,s.size()+1);
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1])
            part[i]=part[i-1]+1;
        else
            part[i]=part[i-1];
    }
    cin >> q;
    while(q--){
        cin >> q1 >> q2;
        cout << part[q2-1]-part[q1-1] sb;
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