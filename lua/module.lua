

-- Module is a single file 
-- which return single `table` when called
--
module = {
	sub = function (x, y) -- Not recommended way
		return x - y
	end,

	mul = function (x, y) -- Not a recommned way
		return x * y
	end
}

-- Recommanded way of add function
-- function must be global
function module.add(x, y)
	return x + y
end

function module.power(x, y) -- Recommanded way add a function to table
	return x ^ y
end

return module
