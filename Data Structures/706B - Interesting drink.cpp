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
int arr2[100001];
void solve() //SOLVE
{
    int n,q,qu,counter=0;
    cin >> n;
    int arr[n];
    For1(n) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++){
        counter++;
        for(int j=arr[i]; j<arr[i+1]; j++){
            arr2[j]=counter;
        }
    }
    counter++;
    for(int i=arr[n-1]; i<100001; i++){
        arr2[i]=counter;
    }
    cin >> q;
    while(q--){
        cin >> qu;
        cout << arr2[min(100000,qu)] sb;
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