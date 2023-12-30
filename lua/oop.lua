-- lua does not have built in oop
-- to access variable use `.` if function then use `:`

local function Pet(name)
	name = name or "Shahan"
	return {
		name = name,
		status = "Hungry",

		feed = function(self)
			self.status = "Full"
		end
	}
end


local cat = Pet("Kitty")
print(cat.status)

cat:feed() -- user `:` to access in function called `feed`
print(cat.status)


-- inheritance
local function Dog(name, breed)
	local dog = Pet(name) -- inheritance

	-- extending Pet class (function)
	-- by adding `breed`, `loyalty`, `is_loyal`, `bark`
	dog.breed = breed 
	dog.loyalty = 1

	dog.is_loyal = function (self)
		return self.loyalty >= 10
	end

	dog.bark = function (self)
		print("Woof Woof")
	end

	return dog -- import to return the object that created by parent class
end

local lassy = Dog("Purro", "German")

if lassy:is_loyal() then
	print("Loyal")
else
	print("Not Loyal")
end

