/*
 * =========================================================================
 *
 *       Filename:  009.cpp
 *
 *           Link:  https://projecteuler.net/problem=9
 *
 *        Version:  1.0
 *        Created:  2018/12/14 23时54分57秒
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

// Answer: 31875000
// Tips: Answer = a*b*c
//       a = 200 b = 375 c = 425

int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    ll a,b,c;
    for(a = 1;a <= 1000;a++)
    {
        for(b = a;b <= 1000;b++)
        {
            c = 1000-a-b;
                if(a*a + b*b == c*c)
                    printf("%lld %lld %lld\n",a,b,c);
        }
    }
    cout << 200*375*425 << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

