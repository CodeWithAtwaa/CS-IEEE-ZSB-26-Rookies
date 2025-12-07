#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 temp.c++ -o temp
// gdb ./temp
// ctrl + shift + b
// f5

// ===================== MACROS ===================== //
#define rep(i, x, n) for (ll i = x; i < (ll)(n); i++)
#define repr(i, n, x) for (int i = n; i >= x; i--)
#define all(vec) vec.begin(), vec.end()
#define allr(vec) vec.rbegin(), vec.rend()

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

#define str   \
    string s; \
    cin >> s;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

#define no cout << "NO\n";
#define yes cout << "YES\n";

#define dd     \
    int n;     \
    cin >> n;  \
    vi arr(n); \
    cin >> arr;

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1e6 + 5;

int getBit(int x, int index) { return (x >> index) & 1; }
int setBit(int x, int index) { return x | (1LL << index); }
int resetBit(int x, int index) { return x & (~(1LL << index)); }
int flipBit(int x, int index) { return x ^ (1LL << index); }

// Don't stop when you're tired, stop when you're done.

void Elwarda_Da3at_Fel_Mo7eet()
{
    int n;
    cin >> n;

    ll total = n * (n + 1) / 2;
    if (total % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    ll one = total / 2;

    vi arr1, arr2;

    for (ll i = n; i >= 1; i--)
    {
        if (i <= one)
        {
            arr1.PB(i);
            one -= i;
        }
        else
        {
            arr2.PB(i);
        }
    }

    cout << arr1.size() << "\n";
    rep(i, 0, arr1.size())
    {
        if (i)
        {
            cout << " ";
        }
        cout << arr1[i];
    }
    cout << "\n";

    cout << arr2.size() << "\n";
    rep(i, 0, arr2.size())
    {
        if (i)
        {
            cout << " ";
        }
        cout << arr2[i];
    }
    cout << "\n";
}

int main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Elwarda_Da3at_Fel_Mo7eet();
    }
}
