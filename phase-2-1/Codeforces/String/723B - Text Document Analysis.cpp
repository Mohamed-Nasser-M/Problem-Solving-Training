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
    int n,sum=0,cun=0;string s;
    cin >> n >> s;
    vector<int>vs;
    For1(n){
        if(s[i]!='(' && s[i]!='_' && s[i]!=')'){
            for(int j=i; j<n; j++,i++)
                if(s[j]=='(' || s[j]=='_') break;
                else sum++;
            vs.emplace_back(sum);sum=0;
        }
        if(s[i]=='('){
            for(int j=i+1; j<n; j++,i++){
                if(s[j]!='_' && s[j]!=')'){
                    cun++;
                    for(int k=j; k<n; k++,j++,i++){
                        if(s[k]=='_' || s[k]==')') break;
                    }
                }
                if(s[j]==')') break;
            }
        }
    }
    vs.emplace_back(sum);
    sort(vs.begin(),vs.end());
    cout << vs.back() << ' ' << cun;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}