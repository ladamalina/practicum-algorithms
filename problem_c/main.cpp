#include <iostream>
#include <vector>

using namespace std;

vector<double> MovingAverage(const vector<int>& arr, int windowSize) {
  vector<double> avgs(arr.size() - windowSize + 1);

  int currentSum = 0;
  int currentFirst = arr[0];
  for (int i = 0; i < windowSize; ++i) {
    currentSum += arr[i];
  }
  double currentAvg = static_cast<double>(currentSum) / windowSize;
  avgs[0] = currentAvg;

  for (int i = 1; i < avgs.size(); ++i) {
    int nextNum = arr[windowSize + i - 1];
    currentSum = currentSum - currentFirst + nextNum;
    currentAvg = static_cast<double>(currentSum) / windowSize;
    avgs[i] = currentAvg;
    currentFirst = arr[i];
  }

  return avgs;
}

void print(const vector<double>& result) {
  for (double x : result)
    cout << x << " ";
  cout << endl;
}

int main() {
  int n, windowSize;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  cin >> windowSize;
  print(MovingAverage(arr, windowSize));
}
