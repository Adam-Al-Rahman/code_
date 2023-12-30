

for i = 1, 10, 2 do -- jump 2 step
	print(i)
end


print("\nArray for Loop")
local array = {2, 3, 45, 3, 5, 2, 32}

for i = 1, #array do
	print(array[i])
end


print([[

Array while loop
================
]])
local i = 1

while(i < #array) do
	print("Array " .. i .. ": " .. array[i])
	i = i + 1
end


print("\nArray repeat loop")

local x = 1
-- it atleast run one time
repeat 
	print(array[x])
	x = x + 1
until x > #array
