#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n;
string s;

vi zx{26 * 26, 26, 1};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  while (0 < (n--)) {
    cin >> s;

    auto f = 0;
    for (auto i = 0; i < 3; ++i) {
      f += (s[i] - 'A') * zx[i];
    }

    auto g = s.substr(4);
    auto iss = istringstream{g};
    int h;
    iss >> h;

    cout << (abs(f - h) <= 100 ? "nice" : "not nice") << '\n';
  }

  return 0;
}