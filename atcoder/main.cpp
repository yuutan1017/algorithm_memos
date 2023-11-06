
#include "memos.h"

#define rep(i,a,b) for(int i=a;i<b;i++)
#define reps(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define numof(arr) (sizeof(arr) / sizeof(arr[0]))
#define reprint(x) for(auto &i:x) {cout << i << ' ';}

//#pragma GCC optimize ("-O3")
using namespace std;
void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

////////////////////////////////////////////////////////////////////////////////////////////


void solve()
{
    Sieve_Of_Eratosthenes(200);
}

void _main() { solve(); }