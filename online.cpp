#include <bits/stdc++.h>
#include <climits>
using namespace std;
struct IoSetup {IoSetup() {cin.tie(nullptr);ios::sync_with_stdio(false);cout << fixed << setprecision(15);cerr << fixed << setprecision(15);}} iosetup;
void setIO(string s)
{freopen((s + ".in").c_str(), "r", stdin);freopen((s + ".out").c_str(), "w", stdout);}
#define overload5(_1,_2,_3,_4,_5,name,...) name
#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep4(i,a,b,c) for(ll i=(a)+((b)-(a)-1)/(c)*(c);i>=(a);i-=c)
#define repsq(i, n) for (ll i = 1; ((i) * (i) < n); ++i)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&&i:a)
#define each2(x,y,a) for(auto&&[x,y]:a)
#define each3(x,y,z,a) for(auto&&[x,y,z]:a)
#define each4(w,x,y,z,a) for(auto&&[w,x,y,z]:a)
#define each(...) overload5(__VA_ARGS__,each4,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) rbegin(i),rend(i)
#define rall2(i,a) rbegin(i),rbegin(i)+a
#define rall3(i,a,b) rbegin(i)+a,rbegin(i)+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define len(x) (ll)(x).size()
#define rev(vec) reverse(vec.begin(), vec.end())
#define elif else if
#define pb push_back
#define pf push_front
#define eb emplace_back
#define lexi lexicographical_compare
#define Test int testing; cin >> testing; while(testing--)
#define dbg(...) cout << #__VA_ARGS__ << " = ", _print(__VA_ARGS__)
#define sint(...) int __VA_ARGS__; in(__VA_ARGS__)
#define sll(...) ll __VA_ARGS__; in(__VA_ARGS__)
#define sstr(...) string __VA_ARGS__; in(__VA_ARGS__)
#define sch(...) char __VA_ARGS__; in(__VA_ARGS__)
#define sdbl(...) double __VA_ARGS__; in(__VA_ARGS__)
#define sld(...) ld __VA_ARGS__; in(__VA_ARGS__)
#define svll(n, v) vll v(n); scan(v)
#define svii(n, v) vii v(n); scan(v)
#define svec(type, n, v) vector<type> v(n); scan(v)
#define s1vll(n,v) vll v(n + 1); rep(i, 1, n + 1) cin >> v[i];
#define s1vii(n,v) vii v(n + 1); rep(i, 1, n + 1) cin >> v[i];
#define fi first
#define se second
#define str(x) to_string(x)
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// ----------------------------------------------------------------------------------------
// universal shorthands
template<class T> using V = vector<T>;                  // dynamic array
template<class T, size_t N> using A = array<T, N>;      // fixed-size array
// *** Primitive short aliases ***
using ll = long long;
using ld = long double;
using ull = unsigned long long;
// *** Container/type shortcuts ***
using vch = vector<char>;
using vvch = vector<vch>;
using vvcc = vector<vch>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vii = vector<int>;
using vvii = vector<vii>;
using vecs = vector<string>;
// *** Pair shortcuts ***
using P = pair<ll,ll>;
using pll = pair<ll,ll>;
using pdd = pair<ld,ld>;
using pii = pair<int,int>;
// *** Vector of pairs ***
using vpii = vector<pii>;
using vvpii = vector<vpii>;
using vpll = vector<pll>;
using vvpll = vector<vpll>;
using vpci = vector<pair<char,int>>;
using vpcl = vector<pair<char,ll>>;
// *** Boolean and set containers ***
using vbl = vector<bool>;
using vvbl = vector<vbl>;
using usetii = unordered_set<int>;
using usetll = unordered_set<ll>;
using setii = set<int>;
using setll = set<ll>;
using setstr = set<string>;
using usetpll = unordered_set<pll>;
using usetpii = unordered_set<pii>;
// *** Stack shortcuts ***
using stkint = stack<int>;
using stkll = stack<ll>;
using stkpii = stack<pii>;
using stkpll = stack<pll>;
static constexpr ll MOD9 = 998244353;
static constexpr ll MODe = 1000000007;
// ----------------------------------------------------------------------------------------
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template <class T = ll, class S> T sum(const S &v) { return accumulate(all(v), T(0)); }
template<typename T>using maxpq = priority_queue<T>;
template<typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;
/* input */
template<class T>
void scan(T& x) {
    cin >> x;
}

template<class A, class B>
void scan(pair<A, B>& p) {
    scan(p.first);
    scan(p.second);
}

template<class T>
void scan(vector<T>& v) {
    for (auto& x : v)
        scan(x);
}

// vector<bool> needs special handling
inline void scan(vector<bool>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        int x;
        cin >> x;
        v[i] = x;
    }
}

template<class T>
void scan(deque<T>& v) {
    for (auto& x : v)
        scan(x);
}

template<class T, size_t N>
void scan(array<T, N>& a) {
    for (auto& x : a)
        scan(x);
}

template<class T, size_t N>
void scan(T (&a)[N]) {
    for (auto& x : a)
        scan(x);
}

template<class... Ts>
void in(Ts&... xs) {
    (scan(xs), ...);
}
/* output */

template<class T>
void print(const T& x) {
    cout << x;
}

template<class A, class B>
void print(const pair<A, B>& p) {
    print(p.first);
    cout << ' ';
    print(p.second);
}

template<class T>
void print(const vector<T>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        if (i) cout << ' ';
        print(v[i]);
    }
}

template<class T>
void print(const deque<T>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        if (i) cout << ' ';
        print(v[i]);
    }
}

template<class T, size_t N>
void print(const array<T, N>& a) {
    for (size_t i = 0; i < N; i++) {
        if (i) cout << ' ';
        print(a[i]);
    }
}

template<class T>
void print(const set<T>& s) {
    bool first = true;
    for (const auto& x : s) {
        if (!first) cout << ' ';
        first = false;
        print(x);
    }
}

template<class T>
void print(const multiset<T>& s) {
    bool first = true;
    for (const auto& x : s) {
        if (!first) cout << ' ';
        first = false;
        print(x);
    }
}

inline void out() {
    cout << '\n';
}

template<class Head, class... Tail>
void out(const Head& head, const Tail&... tail) {
    print(head);
    ((cout << ' ', print(tail)), ...);
    cout << '\n';
}
/* debug */
namespace debug {

template<class T>
struct is_pair : false_type {};

template<class A, class B>
struct is_pair<pair<A, B>> : true_type {};


template<class T>
struct is_tuple : false_type {};

template<class... Ts>
struct is_tuple<tuple<Ts...>> : true_type {};


template<class T, class = void>
struct is_iterable : false_type {};

template<class T>
struct is_iterable<
    T,
    void_t<
        decltype(begin(declval<T>())),
        decltype(end(declval<T>()))
    >
> : true_type {};


template<class T>
void print(const T& x);


template<class Tuple, size_t... I>
void print_tuple(const Tuple& t, index_sequence<I...>) {
    cerr << '(';

    size_t pos = 0;

    ((cerr << (pos++ ? ", " : ""),
      print(get<I>(t))), ...);

    cerr << ')';
}


template<class T>
void print(const T& x) {
    using U = decay_t<T>;

    if constexpr (is_same_v<U, string>) {
        cerr << '"' << x << '"';
    }

    else if constexpr (is_same_v<U, char>) {
        cerr << '\'' << x << '\'';
    }

    else if constexpr (is_same_v<U, bool>) {
        cerr << (x ? "true" : "false");
    }

    else if constexpr (is_pair<U>::value) {
        cerr << '(';
        print(x.first);
        cerr << ", ";
        print(x.second);
        cerr << ')';
    }

    else if constexpr (is_tuple<U>::value) {
        print_tuple(
            x,
            make_index_sequence<tuple_size_v<U>>{}
        );
    }

    else if constexpr (
        is_iterable<U>::value &&
        !is_same_v<U, string>
    ) {
        cerr << '{';

        bool first = true;

        for (const auto& y : x) {
            if (!first)
                cerr << ", ";

            first = false;
            print(y);
        }

        cerr << '}';
    }

    else {
        cerr << x;
    }
}


/* stack */

template<class T>
void print(stack<T> s) {
    cerr << '[';

    bool first = true;

    while (!s.empty()) {
        if (!first)
            cerr << ", ";

        first = false;

        print(s.top());
        s.pop();
    }

    cerr << ']';
}


/* queue */

template<class T>
void print(queue<T> q) {
    cerr << '[';

    bool first = true;

    while (!q.empty()) {
        if (!first)
            cerr << ", ";

        first = false;

        print(q.front());
        q.pop();
    }

    cerr << ']';
}


/* priority_queue */

template<class T, class Container, class Compare>
void print(priority_queue<T, Container, Compare> q) {
    cerr << '[';

    bool first = true;

    while (!q.empty()) {
        if (!first)
            cerr << ", ";

        first = false;

        print(q.top());
        q.pop();
    }

    cerr << ']';
}


/*
Splits:

dbg(a, b, f(x, y))

into

"a"
"b"
"f(x, y)"
*/

vector<string> names(string s) {
    vector<string> result;

    string current;
    int depth = 0;

    for (char c : s) {

        if (c == ',' && depth == 0) {

            while (!current.empty() && current.front() == ' ')
                current.erase(current.begin());

            while (!current.empty() && current.back() == ' ')
                current.pop_back();

            result.push_back(current);
            current.clear();
        }

        else {

            if (c == '(' || c == '[' || c == '{')
                depth++;

            if (c == ')' || c == ']' || c == '}')
                depth--;

            current += c;
        }
    }

    while (!current.empty() && current.front() == ' ')
        current.erase(current.begin());

    while (!current.empty() && current.back() == ' ')
        current.pop_back();

    result.push_back(current);

    return result;
}


template<class... Args>
void dbg(const char* expressions, const Args&... args) {

    auto n = names(expressions);

    int i = 0;

    (
        (
            cerr << (i ? " | " : "")
                 << n[i++] << " = ",
            print(args)
        ),
        ...
    );

    cerr << '\n';
}

} // namespace debug


#ifndef ONLINE_JUDGE
    #define dbg(...) debug::dbg(#__VA_ARGS__, __VA_ARGS__)
#else
    #define dbg(...) ((void)0)
#endif
// Range Query Data Structures
//Segment Tree
struct SegTree {
    ll n;
    vll tree;

    SegTree(ll _n) {
        n = _n;
        tree.assign(4*n, 0);
    }


    void build(ll node, ll l, ll r, vll &a) {
        if (l == r) {
            tree[node] = a[l];
            return;
        }
        ll mid = (l + r) / 2;
        build(2*node, l, mid, a);
        build(2*node+1, mid+1, r, a);
        tree[node] = tree[2*node] + tree[2*node+1];
    }


    ll query(ll node, ll l, ll r, ll ql, ll qr) {
        if (qr < l || r < ql) return 0;              
        if (ql <= l && r <= qr) return tree[node];  
        ll mid = (l + r) / 2;
        return query(2*node, l, mid, ql, qr)
            + query(2*node+1, mid+1, r, ql, qr);
    }


    void update(ll node, ll l, ll r, ll pos, ll val) {
        if (l == r) {
            tree[node] = val;
            return;
        }
        ll mid = (l + r) / 2;
        if (pos <= mid) update(2*node, l, mid, pos, val);
        else update(2*node+1, mid+1, r, pos, val);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
};
//Quick Graph Builder:
vvll build_adj(ll n, ll m, ll base=1,bool directed = false){
    vvll adj(n + 1);
    for(ll i=0,u,v; i<m; ++i){
        in(u,v);
        u-=base,v-=base;
        if (!directed) adj[u].pb(v),adj[v].pb(u);
        else adj[u].pb(v);
    }
    return adj;
}

template <typename T>
V<V<T>> readGrid(ll H, ll W, bool withSpaces = false) {
    V<V<T>> grid(H, V<T>(W));
    for (int i = 0; i < H; i++) {
        if (is_same<T, char>::value && !withSpaces) {
            string row; cin >> row;
            for (int j = 0; j < W; j++) grid[i][j] = row[j];
        } else {
            for (int j = 0; j < W; j++) cin >> grid[i][j];
        }
    }
    return grid;
}
// LCA — Binary Lifting
struct LCA {
    ll n, LOG;
    vvll adj;
    vvll par;     // par[v][j] = 2^j-th ancestor
    vll depth;

    LCA(ll n) : n(n) {
        LOG = __lg(n) + 1;
        adj.assign(n, {});
        par.assign(n, vll(LOG, -1));
        depth.assign(n, 0);
    }

    // add undirected edge
    void add_edge(ll u, ll v) {
        adj[u].pb(v);
        adj[v].pb(u);
    }

    // DFS to set depth + immediate parent
    void dfs(ll v, ll p) {
        par[v][0] = p;
        for (ll to : adj[v]) {
            if (to == p) continue;
            depth[to] = depth[v] + 1;
            dfs(to, v);
        }
    }

    // build LCA table
    void build(ll root = 0) {
        dfs(root, -1);
        for (ll j = 1; j < LOG; j++) {
            for (ll i = 0; i < n; i++) {
                if (par[i][j-1] != -1)
                    par[i][j] = par[par[i][j-1]][j-1];
            }
        }
    }

    // kth ancestor of node v
    ll kth_parent(ll v, ll k) {
        for (ll j = 0; j < LOG; j++) {
            if (k & (1LL << j)) {
                v = par[v][j];
                if (v == -1) break;
            }
        }
        return v;
    }

    // lowest common ancestor
    ll lca(ll a, ll b) {
        if (depth[a] < depth[b]) swap(a, b);

        // lift a to same depth
        a = kth_parent(a, depth[a] - depth[b]);

        if (a == b) return a;

        for (ll j = LOG - 1; j >= 0; j--) {
            if (par[a][j] != par[b][j]) {
                a = par[a][j];
                b = par[b][j];
            }
        }
        return par[a][0];
    }

    // distance between two nodes
    ll dist(ll a, ll b) {
        ll c = lca(a, b);
        return depth[a] + depth[b] - 2 * depth[c];
    }
};
    
// Tarjans Algorithm for SCC
struct SCC
{
    ll n,timer=0,compcnt=0;
    vvll g;
    vll disc,low,comp;
    stkll stk;
    vbl instack;
    
    SCC(ll n) : n(n), g(n), disc(n,-1), low(n), comp(n,-1), instack(n,false){}
    
    void add_edge(ll u,ll v)
    {
        g[u].pb(v);
    }
    
    void dfs(ll u)
    {
        disc[u] = low[u] = ++timer;
        stk.push(u);
        instack[u]=true;
        
        each(v,g[u])
        {
            if (disc[v]==-1)
            {
                dfs(v);
                chmin(low[u],low[v]);
            }
            elif (instack[v])
            {
                chmin(low[u],disc[v]);
            }
        }
        
        if (low[u]==disc[u])
        {
            while(true)
            {
                ll v = stk.top();stk.pop();
                instack[v] = false;
                comp[v] = compcnt;
                if (v==u) break;
            }
            compcnt++;
        }
    }
    
    void run()
    {
        rep(i,0,n)
        {
            if (disc[i]==-1) dfs(i);
        }
    }
};
// DSU Algorithm
struct DSU {
    vector<ll> parent, size;
    ll component_count;
    ll max_comp_size;

    DSU(ll n)
    {
        parent.resize(n);
        size.assign(n, 1);

        rep(i, n) parent[i] = i;

        component_count = n;
        max_comp_size = 1;
    }

    // find leader with path compression
    ll leader(ll x)
    {
        if (parent[x] == x) return x;
        return parent[x] = leader(parent[x]);
    }

    // merge two sets
    bool merge(ll x, ll y)
    {
        ll rx = leader(x);
        ll ry = leader(y);

        if (rx == ry) return false;

        // union by size
        if (size[rx] < size[ry]) swap(rx, ry);

        parent[ry] = rx;
        size[rx] += size[ry];

        component_count--;
        max_comp_size = max(max_comp_size, size[rx]);
        return true;
    }

    // are x and y in the same set?
    bool same(ll x, ll y)
    {
        return leader(x) == leader(y);
    }

    // size of the set containing x
    ll setsz(ll x)
    {
        return size[leader(x)];
    }
};
//primes upto
const int residues[] = {1, 7, 11, 13, 17, 19, 23, 29};
vll primes_upto(ll n) 
{
    if (n < 2) return {};

    bitset<50000001> is_prime;
    is_prime.set();
    is_prime[0] = 0; // 1 is not prime

    vll primes = {2, 3, 5};

    int sqrt_n = sqrt(n);

    for (int p = 7; p <= sqrt_n; p += 2) {
        // Check only numbers coprime to 2, 3, 5
        ll mod30 = p % 30;
        bool good = false;
        each(r,residues)
            if (r == mod30) good = true;

        if (!good) continue;
        if (!is_prime[p/2]) continue;

        for (int j = p*p; j <= n; j += 2*p) {
            is_prime[j/2] = 0;
        }
    }

    for (int p = 7; p <= n; p += 2) {
        int mod30 = p % 30;
        each(r,residues) {
            if (mod30 == r) {
                if (is_prime[p/2]) primes.push_back(p);
                break;
            }
        }
    }

    return primes;
}
ll power(ll a, ll b) 
{
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

template <typename T>
vector<T> operator+(const vector<T>& x, const vector<T>& y) {
    vector<T> r = x;
    r.insert(r.end(), y.begin(), y.end());
    return r;
}

/*modint template */
template<ll M>
struct modint {
    ll v;
    constexpr modint(ll _v = 0) noexcept {
        v = _v % M;
        if (v < 0) v += M;
    }
    // addition / subtraction
    constexpr modint& operator+=(modint o) noexcept {
        v += o.v;
        if (v >= M) v -= M;
        return *this;
    }
    constexpr modint& operator-=(modint o) noexcept {
        v -= o.v;
        if (v < 0) v += M;
        return *this;
    }
    // multiplication
    constexpr modint& operator*=(modint o) noexcept {
        v = (unsigned long long)v * o.v % M;
        return *this;
    }
    // binary exponentiation
    friend modint power(modint x, ll e) {
        modint res(1);
        while (e > 0) {
            if (e & 1) res *= x;
            x *= x;
            e >>= 1;
        }
        return res;
    }
    // inverse (M must be prime)
    friend modint inv(modint x) {
        return power(x, M - 2);
    }
    // division
    constexpr modint& operator/=(modint o) noexcept {
        return *this *= inv(o);
    }

    // lee-way operators
    constexpr modint operator+(modint o) const noexcept { return modint(*this) += o; }
    constexpr modint operator-(modint o) const noexcept { return modint(*this) -= o; }
    constexpr modint operator*(modint o) const noexcept { return modint(*this) *= o; }
    constexpr modint operator/(modint o) const noexcept { return modint(*this) /= o; }
    constexpr modint& operator++() noexcept {
        *this += 1;
        return *this;
    }
    
    constexpr modint operator++(int) noexcept {
        modint old = *this;
        ++(*this);
        return old;
    }

    // I/O
    friend ostream& operator<<(ostream& os, modint x) {
        return os << x.v;
    }
    friend istream& operator>>(istream& is, modint& x) {
        ll t; is >> t; x = modint(t); return is;
    }
};

using mint = modint<MOD9>;
using vmint = vector<mint>;
/*Binomial Templates*/
vector<mint> fact, invfact;
void init_nCr(ll N) {
    fact.resize(N + 1);
    invfact.resize(N + 1);

    fact[0] = 1;
    for (ll i = 1; i <= N; i++)
        fact[i] = fact[i - 1] * i;

    invfact[N] = inv(fact[N]);
    for (ll i = N; i > 0; i--)
        invfact[i - 1] = invfact[i] * i;
}
mint nCr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] * invfact[n - r];
}

int main()
{

}
