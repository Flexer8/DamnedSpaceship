---
-- gameplay.lua
--
-- контейнер для систем которые работают в игре

local class = require "middleclass"
local lovetoys = require "lovetoys.lovetoys"

-- системы
local ViewSystem = require "ecs.systems.view_system"


lovetoys.initialize({
    globals = true,
    debug = true
})


local Gameplay = class("Gameplay")

function Gameplay:initialize()
    self.engine = Engine()

    local view_system = ViewSystem()

    self.engine:addSystem(view_system, "draw")
end

function Gameplay:update(dt)
    self.engine:update(dt)
end

function Gameplay:draw()
    self.engine:draw()
end

return Gameplay
