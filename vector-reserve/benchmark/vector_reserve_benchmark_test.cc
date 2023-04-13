#include "benchmark/benchmark.h"
#include <vector>

static void vector_push_back_benchmark_test(benchmark::State& state) {
  int no_of_elements = state.range(0);
  std::vector<int> longs;
  for (auto _ : state) {
    for(int i = 0; i < no_of_elements; ++i) {
      longs.push_back(no_of_elements);
    }
  }
}

BENCHMARK(vector_push_back_benchmark_test)->RangeMultiplier(2)->Range(1, 10000000);

static void vector_reserve_before_push_back_benchmark_test(benchmark::State& state) {
  int no_of_elements = state.range(0);
  std::vector<int> longs;
  longs.reserve(no_of_elements);
  for (auto _ : state) {
    for(int i = 0; i < no_of_elements; ++i) {
      longs.push_back(no_of_elements);
    }
  }
}

BENCHMARK(vector_reserve_before_push_back_benchmark_test)->RangeMultiplier(2)->Range(1, 10000000);
