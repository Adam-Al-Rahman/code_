; ModuleID = './test.bc'
source_filename = "test.ll"
target triple = "x86_64-pc-linux-gnu"

define dso_local noundef i32 @main() {
  %1 = alloca i32, align 4
  store i32 0, i32* %1, align 4
  ret i32 42
}
