

# build the library
cc_library(
  name="hello_lib",
  srcs = ["hello.cc"],
  hdrs = ["hello.h"]
)

# Build Rule
cc_binary(
  name = "Project_Hello",
  srcs = ["main.cc"],
  deps = [":hello_lib"] # main depend on the hello.cc
)


# build test

cc_test(
  name = "hello_test",
  srcs = ["hello_test.cc"], # test file
  deps = [":hello_lib"]
)

