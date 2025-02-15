#include "Blockfall.h"
#include "GameController.h"
#include "iostream"

int main(int argc, char* argv[]) {
    BlockFall game(argv[1], argv[2], argv[4], argv[5],
        argv[6]);

    GameController controller;
    controller.play(game, argv[3]);
    

    return 0;
}