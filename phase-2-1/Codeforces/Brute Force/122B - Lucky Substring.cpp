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
    int one=0,two=0,three=0,maxi,c=4;
    For1(s.size()){
        if(s[i]=='4')
            one++;
        else if(s[i]=='7')
            two++;
    }
    For1(s.size()-1){
        if(s.substr(i,2)=="47")
            three++;
    }
    maxi=one;
    if(two>maxi)
        maxi=two,c=7;
    if(three>maxi)
        maxi=three,c=47;
    if(!maxi) cout << -1;
    else cout << c;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}