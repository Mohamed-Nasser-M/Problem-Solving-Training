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
    int n;string s;bool h= true;
    cin >> n >> s;
    vector<char>arr(n),arr2(n);
    For1(n)arr[i]=s[i];
    for(int i=n; i<n*2; i++)
        arr2[i-n]=s[i];
    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());
    For1(n){
        if(arr[i]<=arr2[i]){
            h= false;
            break;
        }
    }
    if(h){cout << "YES";return;}
    h= true;
    For1(n){
        if(arr[i]>=arr2[i]){
            h= false;
            break;
        }
    }
    if(h) cout << "YES";
    else  cout << "NO";
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}
