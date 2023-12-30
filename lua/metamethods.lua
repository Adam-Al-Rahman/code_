
local function add_table_element(x, y)
	return x.num + y.num
end

local meta_table = {
	__add = add_table_element, -- + should do add_table_element
	__sub = function (x, y)
		return x.num - y.num
	end
}


local tb1 = {num = 50}
local tb2 = {num = 10}


setmetatable(tb1, meta_table)

local add_tb_val = tb1 + tb2 -- by default we cannot perform this operation we use metatables concepts
print(add_tb_val)


local sub_tb_val = tb1 - tb2
print(sub_tb_val)
