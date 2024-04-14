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
//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx2,tune=native")
/* **************************************************************** */
void solve() //SOLVE
{
    int n,m,q;
    cin >> n;
    int p[n],a[n],b[n],mini,it;
    deque<int>oo,ot,oh,to,tt,th,ho,ht,hh;
    For1(n) cin >> p[i];
    For1(n) cin >> a[i];
    For1(n) cin >> b[i];
    For1(n){
        if(a[i]==1 && b[i]==1)
            oo.emplace_back(p[i]);
        else if(a[i]==1 && b[i]==2)
            ot.emplace_back(p[i]);
        else if(a[i]==1 && b[i]==3)
            oh.emplace_back(p[i]);
        else if(a[i]==2 && b[i]==1)
            to.emplace_back(p[i]);
        else if(a[i]==2 && b[i]==2)
            tt.emplace_back(p[i]);
        else if(a[i]==2 && b[i]==3)
            th.emplace_back(p[i]);
        else if(a[i]==3 && b[i]==1)
            ho.emplace_back(p[i]);
        else if(a[i]==3 && b[i]==2)
            ht.emplace_back(p[i]);
        else
            hh.emplace_back(p[i]);
    }
    sort(oo.begin(), oo.end());
    sort(ot.begin(), ot.end());
    sort(oh.begin(), oh.end());
    sort(to.begin(), to.end());
    sort(tt.begin(), tt.end());
    sort(th.begin(), th.end());
    sort(ho.begin(), ho.end());
    sort(ht.begin(), ht.end());
    sort(hh.begin(), hh.end());
    cin >> m;
    while(m--){
        cin >> q;
        mini=INT32_MAX,it=-1;
        if(q==1){
            if(!oo.empty() && oo.front()<mini){
                mini=oo.front(),it=1;
            }
            if(!ot.empty() && ot.front()<mini){
                mini=ot.front(),it=2;
            }
            if(!oh.empty() && oh.front()<mini){
                mini=oh.front(),it=3;
            }
            if(!to.empty() && to.front()<mini){
                mini=to.front(),it=4;
            }
            if(!ho.empty() && ho.front()<mini){
                mini=ho.front(),it=7;
            }
        }else if(q==2){
            if(!tt.empty() && tt.front()<mini){
                mini=tt.front(),it=5;
            }
            if(!to.empty() && to.front()<mini){
                mini=to.front(),it=4;
            }
            if(!th.empty() && th.front()<mini){
                mini=th.front(),it=6;
            }
            if(!ht.empty() && ht.front()<mini){
                mini=ht.front(),it=8;
            }
            if(!ot.empty() && ot.front()<mini){
                mini=ot.front(),it=2;
            }
        }else{
            if(!ho.empty() && ho.front()<mini){
                mini=ho.front(),it=7;
            }
            if(!ht.empty() && ht.front()<mini){
                mini=ht.front(),it=8;
            }
            if(!hh.empty() && hh.front()<mini){
                mini=hh.front(),it=9;
            }
            if(!th.empty() && th.front()<mini){
                mini=th.front(),it=6;
            }
            if(!oh.empty() && oh.front()<mini){
                mini=oh.front(),it=3;
            }
        }
        if(it==-1) {cout << -1 << ' ';continue;}
        if(it==1)
            oo.pop_front();
        else if(it==2)
            ot.pop_front();
        else if(it==3)
            oh.pop_front();
        else if(it==4)
            to.pop_front();
        else if(it==5)
            tt.pop_front();
        else if(it==6)
            th.pop_front();
        else if(it==7)
            ho.pop_front();
        else if(it==8)
            ht.pop_front();
        else
            hh.pop_front();
        cout << mini << ' ';
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