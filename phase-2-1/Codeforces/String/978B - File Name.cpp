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
    int n,sum=0,cur=0;string s;
    cin >> n >> s;
    For1(s.size()){
        if(s[i]!=0)
            cur=0;
        if(s[i]=='x'){
            for(int j=i; j<n; j++,i++){
                if(s[j]=='x')
                    cur++;
                else
                    break;
            }
        }
        if(cur>=3)
            sum+=cur-2;
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