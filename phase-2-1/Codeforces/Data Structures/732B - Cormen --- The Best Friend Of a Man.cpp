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
    int n,k,sum=0;
    cin >> n >> k;
    int arr[n];
    For1(n) cin >> arr[i];
    for(int i=1; i<n; i++){
        sum+=max(arr[i],arr[i]+k-arr[i]-arr[i-1])-arr[i];
        arr[i]=max(arr[i],arr[i]+k-arr[i]-arr[i-1]);
    }
    if(n%2==0 && arr[n-1]+arr[n-2]<k){
            sum+=k-arr[n-1]-arr[n-2];
            arr[n-2]+=k-arr[n-1]-arr[n-2];
    }else if(n==2 && arr[0]+arr[1]<k){
        sum+=k-arr[0]-arr[1];
        arr[0]+=k-arr[0]-arr[1];
    }
    cout << sum sb;
    For1(n){
        cout << arr[i];
        if(i!=n-1)
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