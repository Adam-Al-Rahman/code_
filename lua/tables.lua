--[[
Tables can be
Array, list, dictionary
]]


local array = {10, 15, 33, 23, 22}
table.insert(array,  2, 50) -- inset at index 2 value 50
print(table.sort(array)) -- sort array

table.remove(array, 4) -- remove value from index 4

for i = 1, #array do
	print(array[i])
end


local list_update = table.concat(array, "-") -- concat all element from array; separated by "-"
print(list_update)


local list = {10, true, "Hello World", 2.4, array, array_2d}


local array_2d = {
	{10, 15},
	{20, 25}
}


for _, row in ipairs(array_2d) do
	for _, value in ipairs(row) do
		print(value .. "-")
	end
end

