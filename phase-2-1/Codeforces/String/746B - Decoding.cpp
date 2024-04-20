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
void solve() //SOLVE
{
    int n;string s;deque<char>dq;
    cin >> n >> s;
    if(n&1) {
        dq.emplace_back(s[0]);
        for (int i = 1; i < n; i += 2)
            dq.emplace_front(s[i]), dq.emplace_back(s[i + 1]);
    }else
        for(int i=0 ;i<n; i+=2)
            dq.emplace_front(s[i]),dq.emplace_back(s[i+1]);
    for(char i:dq)
        cout << i;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}