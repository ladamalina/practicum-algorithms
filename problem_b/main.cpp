#include <iostream>
#include <vector>

using namespace std;

vector<int> Zip(const vector<int>& a, const vector<int>& b) {
  vector<int> zip(2 * a.size());
  for (int i = 0; i < a.size(); ++i) {
    zip[i * 2] = a[i];
    zip[i * 2 + 1] = b[i];
  }

  return zip;
}

void print(const vector<int>& result) {
  for (int x : result)
    cout << x << " ";
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> b[i];
  print(Zip(a, b));
}
