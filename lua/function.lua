

-- Recommanded way to define function
local function sum(num_a, num_b)
	return num_a + num_b
end

_G.X = sum(5, 10)
print(X)


-- Another way to define function
local sub = function (a, b)
	return a - b
end

print(sub(5, 2))

-- function return no name function
local function counter()
	local count = 0

	return function()
		count = count + 1
		return count
	end
end


local x = counter() -- as this return function; so x is function now


print("counter start")
print(x())
print(x())
print(x())
print("counter end\n")


-- for number of parameter
local function fn(...)
	local sums = 0
	
	for _, value in pairs({...}) do
		if type(value) == "string" then
			print("Value: " .. value)
		elseif type(value) == "table"  then
			for _, element in pairs(value) do
				sums = sums + element
			end
		else
			sums = sums + value
		end
	end

	print("Sums result: " .. sums)
end


fn(3, 3, 4, 5, 53, -3, "Hello world", 3.234, math.pi, {3, 4, 3, 5, 2 ,3, 4},  math.exp(1))
