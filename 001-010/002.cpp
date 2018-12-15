/*
 * =========================================================================
 *
 *       Filename:  002.cpp
 *
 *           Link:  https://projecteuler.net/problem=2
 *
 *        Version:  1.0
 *        Created:  2018/12/14 10时40分22秒
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
ll fib[1000000];
// Answer: 4613732
// Tips: even-value

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    ll ans = 2;
    fib[1] = 1; fib[2] = 2;
    for(int i = 3;i <= 1000000;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
        if(fib[i] > 4000000)
            break;
        if(fib[i]%2 == 0)
        {
            ans += fib[i];
        }

    }
    printf("%lld\n",ans);
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

