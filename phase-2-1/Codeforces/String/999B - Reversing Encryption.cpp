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
vector<int>vs;
void printDivisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            vs.emplace_back(i);
            if (n/i != i)
                vs.emplace_back(n/i);
        }
    }
}
void solve() //SOLVE
{
    int n;string s,str;
    cin >> n >> s;
    printDivisors(n);
    sort(vs.begin(),vs.end());
    for(int i=0; i<vs.size(); i++){
        str=s.substr(0,vs[i]);
        reverse(str.begin(), str.end());
        s=str+s.substr(vs[i],s.size()-vs[i]);
    }
    cout << s;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}