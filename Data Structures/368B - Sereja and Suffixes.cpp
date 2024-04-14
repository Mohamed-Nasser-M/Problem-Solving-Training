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
    int n,q,qu;
    cin >> n >> q;
    int arr[n],l[n];
    For1(n) cin >> arr[i];
    set<int>st;
    for(int i=n-1; i>=0; i--){
        st.insert(arr[i]);
        l[i]=st.size();
    }
    while(q--){
        cin >> qu;
        cout << l[qu-1] sb;
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