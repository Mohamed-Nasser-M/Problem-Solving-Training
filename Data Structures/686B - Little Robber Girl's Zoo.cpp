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
    int n;bool b;
    cin >> n;
    int arr[n];
    For1(n) cin >> arr[i];
    while(true){
        b= false;
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                cout << i << ' ' << i+1 sb;
                swap(arr[i],arr[i-1]);
                b= true;
            }
        }
        if(!b)
            break;
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