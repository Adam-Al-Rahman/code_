

-- basic maths
print(4^2) -- power
print(100 / 3.14) -- division
print(10 % 4) -- mod reminder


-- built in
local str = tonumber("22")
print(str)


-- library
math.randomseed(7) -- psuedo random (return same for every run)
print(math.random())

math.randomseed(os.time()) -- every time file compiled the value change
print(math.random())

print(math.max(1, 88.8, 33, 44, 9.2)) -- max element
print(math.ceil(33.22)) -- return 34





