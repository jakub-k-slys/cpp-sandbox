#include "gtest/gtest.h"
#include <vector>

namespace sandbox {
TEST(vector_reserve_test, reserve) {
  std::vector<int> ints;
  ints.reserve(100);
  ASSERT_EQ(100, ints.capacity());
};
}
