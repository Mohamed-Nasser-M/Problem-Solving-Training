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
    int n,maxi=0;
    cin >> n;
    int arr[n],arr2[n];bool b[n];
    For1(n){cin >> arr[i];b[i]= false;};
    for(int i=n-1; i>=0; i--)
        if(arr[i]>maxi) arr2[i]=arr[i],maxi=arr[i],b[i]= true;
        else arr2[i]=maxi;
    For1(n){
        if(b[i]) cout << 0;
        else cout << arr2[i]+1-arr[i];
        cout << ' ';
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