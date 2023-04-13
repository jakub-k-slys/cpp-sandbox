load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "vector-reserve",
    hdrs = glob(["include/*.h"]),
    srcs = glob(["source/*.cc"]),
    visibility = [
        "//main:__pkg__",
    ],
    copts = [
        "-std=c++20",
        "-Ivector-reserve/include"
    ],
)

cc_test(
    name = "vector-reserve-test",
    srcs = glob(["test/*.cc"]),
    copts = [
        "-Iexternal/gtest/include",
        "-Ivector-reserve/include"
    ],
    deps = [
        "//vector-reserve:vector-reserve",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "benchmark",
    srcs = glob(["benchmark/*.cc"]),
    copts = [
        "-Iexternal/benchmark/include",
        "-Ivector-reserve/include"
    ],
    deps = [
        "//vector-reserve:vector-reserve",
        "@benchmark//:benchmark_main",
    ],
)
