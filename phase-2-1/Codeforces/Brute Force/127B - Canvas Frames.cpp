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
    int n,sum=0;bool b= true;
    cin >> n;
    int arr[n],freq[101];
    For1(101)freq[i]=0;
    For1(n){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    while(b){
        b= false;
        For1(101){
            if(freq[i]>=2){
                freq[i]-=2;
                b= true;
                break;
            }
        }
        if(!b) break;
        b= false;
        For1(101){
            if(freq[i]>=2){
                freq[i]-=2;
                b= true;
                break;
            }
        }
        if(!b) break;
        sum++;
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