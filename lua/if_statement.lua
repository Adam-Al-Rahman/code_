--[[

Relational Operators
----------------
>, <, >=, <=, ~=, == 

Logical Operator
----------------
-- Unary Operator: ~(NOT)
-- Binary Operator: and, or

]]

local hello = "Hello"
local hello_exc = "Hello!"

if hello ~= hello_exc then
	print("Chalo")
elseif string.len(hello) == string.len(hello_exc) then
	print("Equal length but not meaning")
else
	print("Hi")
end
