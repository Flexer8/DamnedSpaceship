---
-- view_system.lua
--
-- Система для отображения геймплея на экран

local class = require "middleclass"


local ViewSystem = class("ViewSystem")

function ViewSystem:initialize()
    -- body...
end

function ViewSystem:update(dt)
    -- body...
end

function ViewSystem:draw()
    -- body...
end

function ViewSystem:requires()
    return {}
end

function ViewSystem:onAddEntity(entity)
    -- body...
end

return ViewSystem
