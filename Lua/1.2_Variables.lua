--[[
    nil
    number 1 1.24 0.1 44
    string 'hello' "Hello World"
    boolean true false
    table
]]
a = 10          --global variable
local a         --local variable
local b = 5
print(b+5) -- here you will see how it took the value of b and added 5 to it and printed it as the value is not being put back in b its being printed out
b=1+5
print(b)

local name="Jack "
local surname="smitter"
print(name .. surname)

--Multi line string also prints it as it is
local multi_line_string = [[
    Hellow world
how are 
        you doing
]]
print(multi_line_string)

-- figure it out why this is not working
local earthisflat= false
local earthisround=true
print("Is earth flat? " .. (earthisflat))
print("Is earth rount? " .. earthisround)



