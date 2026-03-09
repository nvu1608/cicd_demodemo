#include "../include/math_utils.h"
#include <cassert>
#include <iostream>
#include <stdexcept>

void test_add() {
  assert(add(10, 20) == 30);
  std::cout << "[PASS] Test Add\n";
}

void test_divide() {
  assert(divide(10, 2) == 5.0);
  try {
    divide(10, 0);
    assert(false); // Không bao giờ được chạy dòng này
  } catch (const std::invalid_argument &e) {
    std::cout << "[PASS] Test Divide by Zero\n";
  }
}

int main() {
  std::cout << "--- Bat dau chay Unit Test (Ban tu viet) ---\n";
  test_add();
  test_divide();
  std::cout << "--- Tat ca test deu thanh cong! ---\n";
  return 0;
}
