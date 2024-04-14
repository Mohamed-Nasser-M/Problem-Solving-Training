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
/* **************************************************************** */
void solve() //SOLVE
{
    int n,x=0,y=0,sum=0;string s;
    cin >> n >> s;
    vector<char>vs;
    For1(n){
        if(s[i]=='U')
            y++;
        else
            x++;
        if(x>y)
            vs.emplace_back('b');
        else if(x<y)
            vs.emplace_back('l');
    }
    for(int i=1; i<vs.size(); i++)
        if(vs[i]!=vs[i-1])
            sum++;
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