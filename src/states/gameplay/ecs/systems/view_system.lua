---
-- view_system.lua
--
-- Система для отображения геймплея на экран

local class = require "middleclass"

local StiViewer = require "utils.moduls.draw_modul.sti_viewer"


local ViewSystem = class("ViewSystem", System)

function ViewSystem:initialize()
    System.initialize(self)

    self.viewer = StiViewer()
end

function ViewSystem:draw()
    self.viewer:draw()

end

function ViewSystem:requires()
    return {}
end

function ViewSystem:onAddEntity(entity)
    -- body...
end

return ViewSystem
