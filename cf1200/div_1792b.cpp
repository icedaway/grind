#include "bits/stdc++.h"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp> 
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> oset;


#define int long long
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef queue<int> qi;
typedef set<int> si;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef priority_queue<int,std::vector<int>,greater<int>> min_prior;
typedef priority_queue<int> prior;

#define fori(i,n) for(int i = 0; i < n; i++)
#define rfori(i,n) for(int i = n; i >=0; i--)
#define fora(i,a,b) for(int i = a; i <= b; i++)
#define rfora(i,a,b) for(int i = a; i >= b; i--)
#define each(a,x) for(auto a: x)
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define MOD 1000000007
#define MOD1 998244353
#define fill(str,a) memset(str, a, sizeof(str));
#define INF 1e18
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define pos(v,a) find(all(v),a) - v.begin()
#define sz(v) (int)v.size()
#define pm(v) std::cout << v << " ";
#define pn(v) std::cout << v << "\n";
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define maxv(v) *max_element(all(v))
#define minv(v) *min_element(all(v))
#define maxind(v) max_element(all(v)) - v.begin()
#define minind(v) min_element(all(v)) - v.begin()
#define uniq(v) v.erase(unique(v.begin(),v.end()),v.end())
#define int_max 2147483647
#define int_min -2147483647
#define isthere(v,n) (find(all(v),n)!=v.end())
#define delv(v,n) v.erase(find(all(v),n))

#ifndef ONLINE_JUDGE
#include "/Users/apple/cpp/judge.h"
#else
#define dbg(x)
void init(void){}
#endif




void fun(){
  int a1,a2,a3,a4;std::cin >> a1 >> a2 >> a3 >> a4;
  if(a1 == 0){std::cout << 1 << "\n";return;}
  if(a2 > a3){swap(a2,a3);}

  std::cout << a1 + 2*min(a2,a3) + min(a1 + 1,a3 - a2 + a4) << "\n";

}




int32_t main(){
  ios:: sync_with_stdio(0),cin.tie(0);cout<<fixed<<setprecision(20);init();int t = 1;
  std::cin >> t;
  while(t--)
    fun();
  return 0;
}
/*
*/