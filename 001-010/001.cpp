/*
 * =========================================================================
 *
 *       Filename:  001.cpp
 *
 *           Link:  https://projecteuler.net/problem=1
 *
 *        Version:  1.0
 *        Created:  2018/12/14 10时30分45秒
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

// Answer: 233168
// Tips: below
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    ll ou = 0;
    for(int i = 1;i < 1000;i++)
    {
        if(i%15 == 0)
        {
            ou += (ll)i;
            // cout << i << endl;
        }
        else 
        {
            if(i%3 == 0 || i % 5 == 0)
            {
                ou += (ll)i;
                // cout << i << endl;
            }
        }
    }
    printf("%lld\n",ou);

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

