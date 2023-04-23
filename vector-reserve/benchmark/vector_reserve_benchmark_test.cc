#include "benchmark/benchmark.h"
#include <vector>

static void vector_push_back_benchmark_test(benchmark::State& state) {
  int no_of_elements = state.range(0);
  for (auto _ : state) {
    std::vector<int> ints;
    for(int i = 0; i < no_of_elements; ++i) {
      ints.push_back(no_of_elements);
      benchmark::ClobberMemory();
    }
  }
}

BENCHMARK(vector_push_back_benchmark_test)->RangeMultiplier(4)->Range(4, 10000000)->Repetitions(10);

static void vector_reserve_before_push_back_benchmark_test(benchmark::State& state) {
  int no_of_elements = state.range(0);
  for (auto _ : state) {
    std::vector<int> ints;
    ints.reserve(no_of_elements);
    for(int i = 0; i < no_of_elements; ++i) {
      ints.push_back(no_of_elements);
      benchmark::ClobberMemory();
    }
  }
}

BENCHMARK(vector_reserve_before_push_back_benchmark_test)->RangeMultiplier(4)->Range(4, 10000000)->Repetitions(10);
