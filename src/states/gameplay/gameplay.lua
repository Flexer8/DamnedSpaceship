---
-- gameplay.lua
--
-- контейнер для систем которые работают в игре

local class = require "middleclass"
local lovetoys = require "lovetoys.lovetoys"


lovetoys.initialize({
    globals = true,
    debug = true
})


local Gameplay = class("Gameplay")

function Gameplay:initialize()
    self.engine = Engine()
end

function Gameplay:update(dt)
    self.engine:update(dt)
end

function Gameplay:draw()
    self.engine:draw()
end

return Gameplay
