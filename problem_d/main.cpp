#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Если ответ существует, верните вектор из двух элементов
// Если нет - то верните пустой вектор
vector<int> TwoSum(const vector<int>& arr, int targetSum) {
  unordered_map<int, size_t> diffToIdx;
  for (size_t i = 0; i < arr.size(); ++i) {
    if (diffToIdx.count(arr[i]) != 0) { // Парный элемент есть в мапе полусумм
      return {arr[diffToIdx.at(arr[i])], arr[i]};
    } // Парного элемента нет в мапе полусумм
    diffToIdx[targetSum - arr[i]] = i;
  }

  return {};
}

void print(const vector<int>& result) {
  if (result.size() != 2)
    cout << "None" << endl;
  else
    cout << result[0] << " " << result[1] << endl;
}

int main() {
  int n, targetSum;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  cin >> targetSum;
  print(TwoSum(arr, targetSum));
}
