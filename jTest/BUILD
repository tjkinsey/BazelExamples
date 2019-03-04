java_import(
    name = "junit",
    jars = [ "junit-4.13-beta-2.jar" ]
)

java_library(
    name = "lib",
    srcs = glob(["src/main/java/com/files/*.java", "src/test/java/com/files/*.java"]),
    deps = ["junit"]
)

java_binary(
    name = "A",
    main_class = "main.java.com.files.A",
    runtime_deps = [ ":lib" ]
)

java_test(
    name = "BTest",
    test_class = "test.java.com.files.BTest",
    size = "small",
    runtime_deps = ["lib"]
)

java_test(
    name = "CTest",
    test_class = "test.java.com.files.CTest",
    size = "small",
    runtime_deps = ["lib"]
)