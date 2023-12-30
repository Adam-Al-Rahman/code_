
print("Name: ")
local ans = io.read()

print(string.format([[
Name: %s
]], tostring(ans)))



local num1, num2 = 10, 5

io.write("Input " .. num1 .. " + " .. num2 .. ": ")
local ans = io.read()

print(string.format([[
%i + %i = %i
]], num1, num2, ans))
