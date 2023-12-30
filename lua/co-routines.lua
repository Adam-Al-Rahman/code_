
local routine_1 = coroutine.create(
	function()
		for i = 1, 10 do
			print(i)

				print("rouitne 1: " .. i)
			if i == 5 then
				corotine.yield()
			end
		end
	end
)


local routine_fn = function ()
	for i = 11, 20 do
		print("rouitne 2: " .. i)
	end
end

local routine_2 = coroutine.create(routine_fn)

coroutine.resume(routine_1)
print(coroutine.status(routine_1))
