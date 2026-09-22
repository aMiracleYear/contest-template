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
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using i128 = __int128_t;
using u128 = __uint128_t;
template<class T>
using V = vector<T>;
template<class A, class B>
using P = pair<A, B>;
using vll  = vector<ll>;
using vb   = vector<bool>;
using vc   = vector<char>;
using vs   = vector<string>;
using vvll = vector<vll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<typename T>using maxpq = priority_queue<T>;
template<typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;
const int dx4[4] = {1, 0, -1, 0};
const int dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
static constexpr ll MOD9 = 998244353;
static constexpr ll MODe = 1000000007;

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

void solve(){

}

int main()
{
    Test{ solve(); }
}
