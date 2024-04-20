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
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    For1(s3.size()){
        if(isdigit(s3[i])) cout << s3[i];
        else{
            For2(26){
                if(s1[j]==tolower(s3[i])){
                    if(isupper(s3[i]))
                        cout << (char)toupper(s2[j]);
                    else
                        cout << s2[j];
                    break;
                }
            }
        }
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