from ctypes import CDLL

lib_cx = "share_files/component.so"
fn_cx = CDLL(lib_cx)

x = input("Enter two values: ")
y = fn_cx.add(3, 3)
print(y)


