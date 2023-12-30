
local x = "Hello World"
print(x)

-- multiple line string
local sonnet_54 = [[
	Sonnet 54
	---------
	O, how much more doth beauty beauteous seem
	By that sweet ornament which truth doth give.
	The rose looks fair, but fairer we it deem
	For that sweet odor which doth in it live.
	The canker blooms have full as deep a dye
	As the perfumèd tincture of the roses,
	Hang on such thorns, and play as wantonly
	When summer’s breath their maskèd buds discloses;
	But, for their virtue only is their show,
	They live unwooed and unrespected fade,
	Die to themselves. Sweet roses do not so;
	Of their sweet deaths are sweetest odors made.
	And so of you, beauteous and lovely youth,
	When that shall vade, by verse distils your truth.
]]

print(sonnet_54)


-- length of x
print("Length of `" .. x .. "`: " .. #x)
print("Length of `" .. x .. "`(using string.len): " .. string.len(x)) -- recommanded way

-- convert to string
--
local num = 25
local num_str = tostring(num)
print(num_str .. " " .. type(num_str))


local lower_case = "Hello World"
print(string.lower(lower_case))


-- format string
print(string.format("Pi: %.2f | e: %.2f", math.pi, math.exp(1)))

-- find in string
print(string.find(lower_case, "o W"))

local begin, ending = string.find(lower_case, "o W")
print("Begin: " .. begin .. " | " .. "End: ".. ending)

-- match in string
print(string.match(lower_case, "ld"))

-- replace
print(string.gsub(lower_case, 'l', 'i'))
