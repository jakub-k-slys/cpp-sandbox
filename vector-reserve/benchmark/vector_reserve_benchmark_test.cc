#include "benchmark/benchmark.h"


static void vector_resize_benchmark_test(benchmark::State& state) {
  for (auto _ : state) {
    benchmark::DoNotOptimize(0);
  }
}

BENCHMARK(vector_resize_benchmark_test)->RangeMultiplier(2)->Range(1, 100);
