--[[
nil
number : 1, 1.24, 44
string 'hello', "Hello world", 'A', "A"
boolean true false
table
]]

local a -- local scope variable

print(a) -- print nil

A = 2 + 5 -- global scope variable
A = 10 - 1 -- overwrite

print(A)

local name = "Shahan"
local surname = "Ali"

local full_name = name .. " " .. surname
print("My name is " .. full_name .. ". And I am a Genius \n")


-- multi-line string
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


-- Global Scope Variable
FIRST_NAME = "Name"
_G.Surname = "Surname" -- Recommanded Method to create and use global variable

print(FIRST_NAME .. Surname)

-- check type
print(type(FIRST_NAME))
