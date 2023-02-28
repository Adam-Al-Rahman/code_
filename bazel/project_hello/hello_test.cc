#include "hello.h"

#include <assert.h>

int main() {
  Hello hello;
  assert(hello.sayHi() == "Hello World");
}
