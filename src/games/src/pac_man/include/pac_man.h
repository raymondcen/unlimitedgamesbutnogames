/****************************************************************************
 * File Name:
 * Date:
 * Description:
 * Dependencies:
 * Author(s): Raymond Cen,
 *            Ivan Wong
 ****************************************************************************/


#pragma once

// Standard Libraries
#include <iostream>
#include <cstdlib>


// Raylib Libraries
#include <raylib.h>
#include <raymath.h>

// Custom Libraries
#include "game.h"
#include "grid.h"
#include "map.h"

typedef enum GameScreen { TITLE = 0, GAMEPLAY, EXIT, PLAY_AGAIN } GameScreen;

class PacMan : public Game {
    
private:
    Vector2 position;

    //map variables
    Map map;

public:
    PacMan();
    ~PacMan();

    void run_game();

};