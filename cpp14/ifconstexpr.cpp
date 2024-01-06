#include <iostream>
#include <type_traits>
#include <vector>
#include <cassert>
#include <string>

using namespace std;

#ifndef AVERAGE_H
#define AVERAGE_H

template<typename T>
T average(const std::vector<T>& values)
{
  static_assert(std::is_arithmetic_v<T>,
                "Type parameter for average() must be arithmetic.");
  assert(!values.empty()); // Not possible using static_assert()!
  T sum {};
  for (auto& value : values) {
    sum += value;
  }
  return sum / values.size();
}
#endif

template <typename T>
constexpr auto len( const T &v) {
  if constexpr(is_integral<T>::value == true) {
    return v;
  } else if (is_class<T>::value == true){
    return v.length();
  }
  else{
    return (long long unsigned)0;
  }
}

#if __cplusplus == 201703L
// C++17
#elif __cplusplus == 201402L
// C++14
#elif __cplusplus == 202003L
// C++20
#elif __cplusplus == 201103L
// C++11
#elif __cplusplus == 199711L
// C++98
#else
// Pre-C++98 or unknown
#endif

int main(void) {
  vector<int> ve = {1, 2, 3, 4, 5};
  string s = "String name";
  cout << average<int>(ve) << endl;
  cout << len<string>(s) << endl;
  return 0;
}
