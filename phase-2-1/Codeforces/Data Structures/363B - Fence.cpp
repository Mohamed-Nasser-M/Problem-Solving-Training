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
    int n,k,mini,index=1,sum=0;
    cin >> n >> k;
    int arr[n];
    For1(n) cin >> arr[i];
    for(int i=0; i<k; i++){
        sum+=arr[i];
    }
    mini=sum;
    for(int i=k; i<n; i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum<mini)
            mini=sum,index=i-(k-2);
    }
    cout << index;
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}