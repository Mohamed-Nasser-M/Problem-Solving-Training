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
    int n,a;string s;
    cin >> s >> n;
    vector<int>arr;
    set<int>st;
    while(n--){
        cin >> a;
        if(st.count(a))
            st.erase(a);
        else
            st.insert(a);
    }
    for(auto it:st){
        arr.emplace_back((it)-1);
    }
    for(int i=arr.size()-1; i>=0; i--){
        if(i==arr.size()-1){
            if(i%2==0){
                for(int j=s.size()-arr[i]-1,it=arr[i]; j>it; j--,it++){
                    swap(s[it],s[j]);
                }
            }
        }else{
            if(i%2==0){
                for(int j=s.size()-arr[i]-1,it=arr[i]; j>s.size()-arr[i+1]-1; j--,it++){
                    swap(s[it],s[j]);
                }
            }
        }
    }
    For1(s.size()) cout << s[i];
}
/* **************************************************************** */
int main() //MAIN
{
    IOS
    //test
    solve();

    return 0;
}