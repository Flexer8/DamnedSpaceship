---
-- sti_drawer.lua
--
-- модуль, обеспечивающий отображение карты с помощью STI и Tiled

local class = require "middleclass"
local sti = require "sti"

local sti_map = require "gamedata.test001"


local StiViewer = class("StiDrawer")

function StiViewer:initialize()
    self.map = sti(sti_map)

    self.map:update()
end

function StiViewer:draw()
    self.map:draw()
end

return StiViewer
