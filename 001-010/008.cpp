/*
 * =========================================================================
 *
 *       Filename:  008.cpp
 *
 *           Link:  https://projecteuler.net/problem=8
 *
 *        Version:  1.0
 *        Created:  2018/12/14 23时47分28秒
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

// Answer: 23514624000
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    char a[1005];
    cin >> a;
    ll aa[1005];
    clr(aa,0);
    for(int i = 1;i <= 1000;i++)
    {
        aa[i] = a[i-1]-'0';
    }
    ll pr = 0,tmp = 1;
    int st = 1;
    for(int i = 1;i <= 13;i++)
        tmp *= aa[i];
    pr = tmp;
    for(int i = 14;i <= 1000;i++)
    {
        tmp *= aa[i];
        if(aa[st])
            tmp /= aa[st];
        else 
        {
            tmp = 1;
            for(int i = 1;i <= 13;i++)
                tmp *= aa[st+i];
        }
        st++;
        pr = max(pr,tmp);
    }
    cout << pr << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

