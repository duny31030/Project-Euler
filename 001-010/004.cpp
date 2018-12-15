/*
 * =========================================================================
 *
 *       Filename:  004.cpp
 *
 *           Link:  https://projecteuler.net/problem=4
 *
 *        Version:  1.0
 *        Created:  2018/12/14 21时55分16秒
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

const ll minn = 10000;
const ll maxn = 998001;
int NUM = 10;

ll mul_mod(ll a,ll b,ll n)//求a*b%n，由于a和b太大，需要用进位乘法
{
    a=a%n;
    b=b%n;
    ll s=0;
    while(b)
    {
        if(b&1)
            s=(s+a)%n;
        a=(a<<1)%n;
        b=b>>1;
    }
    return s;
}
ll pow_mod(ll a,ll b,ll n)//求a^b%n
{
    a=a%n;
    ll s=1;
    while(b)
    {
        if(b&1)
            s=mul_mod(s,a,n);
        a=mul_mod(a,a,n);
        b=b>>1;
    }
    return s;
}
bool check(ll a,ll n,ll r,ll s)
{
    ll ans=pow_mod(a,r,n);
    ll p=ans;
    for(ll i=1;i<=s;i++)
    {
        ans=mul_mod(ans,ans,n);
        if(ans==1&&p!=1&&p!=n-1)
            return true;
        p=ans;
    }
    if(ans!=1) return true;
    return false;
}

ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}

bool Miller_Rabin(ll n)//Miller_Rabin算法，判断n是否为素数
{
    if(n<2) return false;
    if(n==2) return true;
    if(!(n&1)) return false;
    ll r=n-1,s=0;
    while(!(r&1)){r=r>>1;s++;}
    for(ll i=0;i<NUM;i++)
    {
        ll a=rand()%(n-1)+1;
        if(check(a,n,r,s))
            return false;
    }
    return true;
}
bool che(ll n)
{
    if(n >= 100 && n <= 999)
        return true;
    return false;
}


bool ch(ll n)
{
    // printf("%lld\n",n);
    ll a[100];
    int len = 1;
    while(n)
    {
        a[len++] = n%10;
        n /= 10;
    }
    int l = 1,r = len-1;
    while(l < r)
    {
        if(a[l] != a[r])
        {
            return false;
        }
        else 
        {
            l++,r--;
        }
    }
    return true;
}


// Answer: 906609
// Tips: 写完以后发现自己傻逼了,我直接枚举回文数就好了。。。
int main()
{
    ios
#ifdef ONLINE_JUDGE 
#else 
        freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout); 
#endif
    srand(time(NULL));
    ll pr = 0;
    for(ll i = minn;i <= maxn;i++)
    {
        if(ch(i))
        {
            if(!Miller_Rabin(i))
            {
                for(ll a = 100;a <= 999;a++)
                {
                    if(i%a == 0)
                    {
                        ll b = i/a;
                        if(che(b))
                        {
                            pr = i;    
                            break;
                        }
                    }
                }
            }
        }
    }
    printf("Answer: %lld\n",pr);
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

