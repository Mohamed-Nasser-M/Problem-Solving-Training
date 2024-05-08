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
    int x,y;char a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],f[3][3],g[3][3],h[3][3],I[3][3];bool B= false;
    For1(3){
        For2(3) cin >> a[i][j];
        For2(3) cin >> b[i][j];
        For2(3) cin >> c[i][j];
    }
    For1(3){
        For2(3) cin >> d[i][j];
        For2(3) cin >> e[i][j];
        For2(3) cin >> f[i][j];
    }
    For1(3){
        For2(3) cin >> g[i][j];
        For2(3) cin >> h[i][j];
        For2(3) cin >> I[i][j];
    }
    cin >> x >> y;
    while(x>3) x-=3;
    while(y>3) y-=3;
    if(x==1 && y==1){
        For1(3)
            For2(3)
                if(a[i][j]=='.')
                    B= true,a[i][j]='!';
    }else if(x==1 && y==2){
        For1(3)
            For2(3)
                if(b[i][j]=='.')
                    B= true,b[i][j]='!';
    }else if(x==1 && y==3){
        For1(3)
            For2(3)
                if(c[i][j]=='.')
                    B= true,c[i][j]='!';
    }else if(x==2 && y==1){
        For1(3)
            For2(3)
                if(d[i][j]=='.')
                    B= true,d[i][j]='!';
    }else if(x==2 && y==2){
        For1(3)
            For2(3)
                if(e[i][j]=='.')
                    B= true,e[i][j]='!';
    }else if(x==2 && y==3){
        For1(3)
            For2(3)
                if(f[i][j]=='.')
                    B= true,f[i][j]='!';
    }else if(x==3 && y==1){
        For1(3)
            For2(3)
                if(g[i][j]=='.')
                    B= true,g[i][j]='!';
    }else if(x==3 && y==2){
        For1(3)
            For2(3)
                if(h[i][j]=='.')
                    B= true,h[i][j]='!';
    }else{
        For1(3)
            For2(3)
                if(I[i][j]=='.')
                    B= true,I[i][j]='!';
    }
    if(!B){
        For1(3)
            For2(3)
                if(a[i][j]=='.')
                    a[i][j]='!';
        For1(3)
            For2(3)
                if(b[i][j]=='.')
                    b[i][j]='!';
        For1(3)
            For2(3)
                if(c[i][j]=='.')
                    c[i][j]='!';
        For1(3)
            For2(3)
                if(d[i][j]=='.')
                    d[i][j]='!';
        For1(3)
            For2(3)
                if(e[i][j]=='.')
                    e[i][j]='!';
        For1(3)
            For2(3)
                if(f[i][j]=='.')
                    f[i][j]='!';
        For1(3)
            For2(3)
                if(g[i][j]=='.')
                    g[i][j]='!';
        For1(3)
            For2(3)
                if(h[i][j]=='.')
                    h[i][j]='!';
        For1(3)
            For2(3)
                if(I[i][j]=='.')
                    I[i][j]='!';
    }
    For1(3){
        For2(3){
            cout << a[i][j];
        }
        cout << ' ';
        For2(3){
            cout << b[i][j];
        }
        cout << ' ';
        For2(3){
            cout << c[i][j];
        }
        cout << '\n';
    }
    cout << '\n';
    For1(3){
        For2(3){
            cout << d[i][j];
        }
        cout << ' ';
        For2(3){
            cout << e[i][j];
        }
        cout << ' ';
        For2(3){
            cout << f[i][j];
        }
        cout << '\n';
    }
    cout << '\n';
    For1(3){
        For2(3){
            cout << g[i][j];
        }
        cout << ' ';
        For2(3){
            cout << h[i][j];
        }
        cout << ' ';
        For2(3){
            cout << I[i][j];
        }
        cout << '\n';
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