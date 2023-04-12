load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib",
    hdrs = glob(["include/*.h"]),
    srcs = glob(["source/*.cc"]),
    visibility = [
        "//main:__pkg__",
    ],
    copts = [
        "-std=c++20",
        "-Ilib/include"
    ],
)

cc_test(
    name = "test",
    srcs = glob(["test/*.cc"]),
    copts = [
        "-Iexternal/gtest/include",
        "-Ilib/include"
    ],
    deps = [
        "//lib:lib",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "benchmark",
    srcs = glob(["benchmark/*.cc"]),
    copts = [
        "-Iexternal/benchmark/include",
        "-Ilib/include"
    ],
    deps = [
        "//lib:lib",
        "@benchmark//:benchmark_main",
    ],
)
