/*
 * =========================================================================
 *
 *       Filename:  005.cpp
 *
 *           Link:  https://projecteuler.net/problem=5
 *
 *        Version:  1.0
 *        Created:  2018/12/14 22时15分56秒
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

bool check(ll n)
{
    for(int i = 2;i <= 20;i++)
        if(n%i != 0)
            return false;
    return true;
}


// Answer: 232792560
// Tips: 回头看看数学证明,这题完全是xjb猜的
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    ll pr = 0;
    ll maxn = 11*13*17*19*15*16*9*20;
    for(ll i = maxn;i >= 10000;i -= 10)
    {
        if(check(i))
            pr = i;
    }
    cout << "Answer: " << pr << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

