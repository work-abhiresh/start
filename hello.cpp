#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// ========== Typedefs and Macros ==========
#define int             long long int
#define ii              pair<int,int>
#define vi              vector<int>
#define vii             vector<ii>
#define vvi             vector<vector<int>>
#define vvc             vector<vector<char>>

#define all(v)          (v).begin(), (v).end()
#define rall(v)         (v).rbegin(), (v).rend()
#define _max(v)         *max_element(all(v))
#define _min(v)         *min_element(all(v))
#define _sum(v,i)       accumulate(all(v), i)
#define lb(v, x)        *lower_bound(all(v), x)
#define pa(v)           for(auto x : v) cout << x << ' '; cout << endl;
#define sz(x)           ((int)(x).size())
#define pb              push_back
#define eb              emplace_back
#define ff              first
#define ss              second

// ========== I/O Macros ==========
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
#define endl            '\n'

constexpr int N = 1e7 + 7;

// ========== Debug Macro ==========
#ifndef ONLINE_JUDGE
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__)
#else
#define deb(...)
#endif

template<typename T>
void _print(const char* name, const T& value) {
    cout << name << " = " << value << endl;
}

template<typename T, typename... Rest>
void _print(const char* names, const T& value, const Rest&... rest) {
    while (*names == ' ') ++names;
    const char* comma = strchr(names, ',');
    cout.write(names, comma - names) << " = " << value << ", ";
    _print(comma + 1, rest...);
}

// ========== Graph Printer ==========
template<typename T>
void printGraph(const vector<vector<T>> &adj, bool oneIndexed = true) {
    int start = oneIndexed ? 1 : 0;
    for (int u = start; u < (int)adj.size(); u++) {
        cout << u << " -> ";
        for (auto v : adj[u]) cout << v << ' ';
        cout << endl;
    }
}

// ========== Fast IO ==========
inline void fastIo() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// .......... ABHR ..........

void testcase() {
    
}

int32_t main() {
    fastIo();

#ifndef ONLINE_JUDGE
    ifstream infile("input.txt");
    if (!infile.good()) {
        ofstream create_input("input.txt");
        create_input.close();
    }

    ifstream outfile("output.txt");
    if (!outfile.good()) {
        ofstream create_output("output.txt");
        create_output.close();
    }

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}
