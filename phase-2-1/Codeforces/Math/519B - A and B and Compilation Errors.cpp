
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
    int n;
    cin >> n;
    int arr1[n],arr2[n-1],arr3[n-2];
    map<int,int>mp1,mp2;
    For1(n) cin >> arr1[i];
    For1(n-1)cin >> arr2[i],mp1[arr2[i]]++;
    For1(n-2)cin >> arr3[i],mp2[arr3[i]]++;
    For1(n){
        if(!mp1[arr1[i]]){
            cout << arr1[i] sb;
            mp2[arr1[i]]++;
            break;
        }
        else mp1[arr1[i]]--;
    }
    For1(n){
        if(!mp2[arr1[i]]){
            cout << arr1[i] sb;
            mp2[arr1[i]]++;
            break;
        }
        else mp2[arr1[i]]--;
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