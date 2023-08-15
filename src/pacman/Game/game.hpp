#pragma once

#include "../GameTile/__barrel__.hpp"
#include "../Config/config.hpp"
#include "../WindowTitle/window_title.hpp"

class Game {

public:
    Game();
    ~Game();

    void run();

private:
    // ---------------- MEMBERS ---------------- //
    sf::RenderWindow *window;
    sf::Sound *ty_sound;
    sf::Sound *background_music;
    vec3pGT map;
    WindowTitle *title;
    WindowTitle *game_over_title;
    bool game_over = false;

    // ---------------- METHODS ---------------- //
    // Listen for events on the RenderWindow.
    void pollEvents();

    // Update all the game elements.
    // Game logic takes place here.
    void update();

    // Update the window by rendering new frames.
    void render() const;

    // Returns whether or not the RenderWindow is open, i.e. if
    // the game is currently running.
    bool isRunning() const;

    void initWindow(); // intialize the RenderWindow.
    void initMap();
    vector<vector<char>> readMap();
    void initTitles();
    void initSounds();

}; //class Game
