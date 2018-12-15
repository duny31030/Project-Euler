/*
 * =========================================================================
 *
 *       Filename:  007.cpp
 *
 *           Link:  https://projecteuler.net/problem=7
 *
 *        Version:  1.0
 *        Created:  2018/12/14 23时38分11秒
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  杜宁元 (https://duny31030.top/), duny31030@126.com
 *   Organization:  QLU_浪在ACM
 *
 * =========================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define pre(i,a,n) for(int i=n;i>=a;i--)
#define ll long long
#define max3(a,b,c) fmax(a,fmax(b,c))
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;

const ll maxn = 10000000;
bool number[maxn+5];
ll primer[maxn+5];
int i,j,c = 0;

void isprimer()
{
    clr(number,1);
    for(i = 2;i <= maxn;i++)
    {
        if(number[i])
            primer[c++] = i;
        for(j = 0;j < c && primer[j]*i <= maxn;j++)
        {
            number[primer[j]*i] = false;
            if(i%primer[j] == 0)
                break;
        }
    }
}

// Answer: 104743

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    isprimer();
    cout << primer[1] << endl;
    cout << primer[10000] << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

