---
-- таблица с состоянием Gameplay

local Gameplay = require "states.gameplay.gameplay"


st_gameplay = {}

function st_gameplay:init()
	self.gameplay = Gameplay:new()
end

function st_gameplay:update(dt)
    self.gameplay:update(dt)
end

function st_gameplay:draw()
    self.gameplay:draw()
end

return st_gameplay
