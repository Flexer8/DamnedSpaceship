---
-- main.lua

package.path = package.path .. ";lib/?/init.lua;lib/?.lua;src/?.lua"


Gamestate = require "hump.gamestate"

require "states.states_registerator"


function love.load()
	Gamestate.registerEvents()
    Gamestate.switch(st_gameplay)
end

function love.update(dt)
    if dt < 1 / 60 then
   	    love.timer.sleep(1 / 60 - dt)
    end
end

function love.draw()
	-- body...
end
