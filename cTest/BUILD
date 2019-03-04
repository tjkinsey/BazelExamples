cc_library(
    name = "cTest",
    srcs = glob([
            "gTest/googletest/src/gtest-all.cc",
            "gTest/googlemock/src/gmock-all.cc",
            "gTest/googlemock/src/gmock_main.cc",
            "src/main/*.cc"
        ],
        exclude = [
            "src/main/A.cc"    
        ]
    
    ),
    hdrs = glob([
        "**/*.h",
          "gTest/googletest/src/*.cc",
          "gTest/googlemock/src/*.cc",
          "src/main/*.h"
    ]),
    includes = [
          "gTest/googlemock",
          "gTest/googletest",
          "gTest/googletest/include",
          "gTest/googlemock/include",
      ],
      linkopts = ["-pthread"],
      visibility = ["//visibility:public"]
)

cc_binary(
    name = "main",
    srcs = [ "src/main/A.cc" ],
    deps = [ ":cTest" ]
)

cc_test(
    name = "tests",
    size = "small",
    srcs = glob([ "src/test/*.cc" ]),
    deps = [ ":cTest" ]
)