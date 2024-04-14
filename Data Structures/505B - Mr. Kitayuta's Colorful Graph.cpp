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
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
/* **************************************************************** */
int n,e,q,q1,q2,sum;bool reach;
vector<vector<vector<int>>>adj;
vector<vector<bool>>visited;
void dfs(int node,int road){ //O(E+V)
    if(node==q2){
        reach= true;
        return;
    }
    visited[road][node] = true;
    For1(adj[road][node].size()){
        int child = adj[road][node][i];
        if(!visited[road][child])
            dfs(child,road);
    }
    visited[road][node] = false;
}
void solve() //SOLVE
{
    cin >> n >> e;
    adj=vector<vector<vector<int>>>(e+1);
    visited=vector<vector<bool>>(e+1);
    For1(e+1){
        For2(n+1){
            adj[i].emplace_back();
            visited[i].emplace_back();
        }
    }
    For1(e){
        int from,to,road;
        cin >> from >> to >> road;
        adj[road][from].push_back(to);
        adj[road][to].push_back(from);
    }
    cin >> q;
    while(q--){
        cin >> q1 >> q2;
        sum=0;
        for(int i=1; i<=e; i++){
            reach= false;
            dfs(q1,i);
            if(reach) sum++;
        }
        cout << sum sb;
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