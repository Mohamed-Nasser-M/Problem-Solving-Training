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
    int n,A=0,C=0,G=0,T=0;string s;
    vector<pair<int,char>>arr={{0,'A'},{0,'C'},{0,'G'},{0,'T'}};
    cin >> n >> s;
    For1(n){
        if(s[i]=='A') arr[0].first++;
        else if(s[i]=='C') arr[1].first++;
        else if(s[i]=='G') arr[2].first++;
        else if(s[i]=='T') arr[3].first++;
    }
    For1(n){
        if(s[i]!='?') continue;
        sort(arr.begin(),arr.end());
        if(arr[0].second=='A') A++;
        else if(arr[0].second=='C') C++;
        else if(arr[0].second=='G') G++;
        else if(arr[0].second=='T') T++;
        arr[0].first++;
    }
    sort(arr.begin(),arr.end());
    if(arr[0].first!=arr[3].first){cout << "===";return;}
    For1(n){
        if(s[i]!='?'){cout << s[i];continue;}
        if(A){cout << 'A'; A--;}
        else if(C){cout << 'C'; C--;}
        else if(G){cout << 'G'; G--;}
        else if(T){cout << 'T'; T--;}
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