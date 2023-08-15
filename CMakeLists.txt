################################################################################
# License: The Unlicense (https://unlicense.org)
# vim:noet:ts=2
################################################################################
cmake_minimum_required(VERSION 3.21...3.25)

project(pacman
	VERSION 1.0.0
	DESCRIPTION "Pac-Man clone written in C++ using SFML"
	LANGUAGES CXX)

find_package(SFML COMPONENTS audio graphics REQUIRED)

add_executable(pacman)
target_link_libraries(pacman PRIVATE sfml-audio sfml-graphics)
target_sources(pacman
	PRIVATE
		src/main.cpp
		src/pacman/Config/config.cpp
		src/Game.cpp
		src/pacman/GameTile/Edible/Food/food.cpp
		src/pacman/GameTile/Edible/Fruit/fruit.cpp
		src/pacman/GameTile/Edible/PowerPellet/power_pellet.cpp
		src/pacman/GameTile/Edible/edible.cpp
		src/pacman/GameTile/Movable/Ghost/ghost.cpp
		src/pacman/GameTile/Movable/Pacman/pacman.cpp
		src/pacman/GameTile/Movable/movable.cpp
		src/pacman/GameTile/Wall/wall.cpp
		src/pacman/GameTile/game_tile.cpp
		src/pacman/MainMenu/MenuAnimation/menu_animation.cpp
		src/pacman/MainMenu/MenuEntry/menu_entry.cpp
		src/pacman/MainMenu/main_menu.cpp
		src/pacman/PerfLogger/performance_logger.cpp
		src/pacman/RNG/rng.cpp
		src/pacman/WindowTitle/window_title.cpp)
