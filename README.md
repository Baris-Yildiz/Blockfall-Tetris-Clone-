# Blockfall-Tetris-Clone-
Blockfall - a revision on Tetris made with C++. Given as the second year assignment in Hacettepe University.

Compilation & Execution:

1) Open cmd

2) Go to the "src" folder (cd src)

3) Type "chcp 65001". This will change the encoding of cmd so that the blocks
display properly.

4) Type "g++ -std=c++11 main.cpp Block.h BlockFall.h 
BlockFall.cpp GameController.h GameController.cpp LeaderboardEntry.h 
LeaderboardEntry.cpp Leaderboard.h Leaderboard.cpp -o blockfall". This will
compile the source code into an executable file called "blockfall.exe"

5) The game takes in a grid, blocks, commands and leaderboard file.
The grid file represents the size of the playground.
The blocks file represents the blocks that the player puts down.
The commands file represents the commands that the player performs. These commands
move and rotate the blocks.
Finally, the leaderboards file is the current leaderboard.

6) As an example, type "blockfall samples/1_big_grid_gravity_switch/grid.dat samples/1_big_grid_gravity_switch/blocks.dat
 samples/1_big_grid_gravity_switch/commands.dat GRAVITY_OFF 
 samples/leaderboard.txt your_name" to run the game with sample inputs.
 More sample commands are in the src/samples/run_commands.txt file.

7) More details provided in the instructions.pdf file.