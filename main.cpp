/*
* tic tac toe by Muhammed Uzair
*   do not even ask me to make it multiple files
*/
// for printing ofc (too obvoius)
#include <iostream>
/*
*    for:
    rand()
*/
#include <cstdlib>
/*
*   for:
    std::string
*   yes i know we will automatically get it but its cleaner.
*/
#include <string>
/*
*   for:
    std::array
*/
#include <array>
/*
* for:
    std::this_thread::sleep_for
*/
#include <thread>
/*
*   for:
      chrono::seconds
*/
#include <chrono>

/*
*   we are gonna make functions so at least our main function is readable
*/
std::array<std::string, 2> stylish_x_cell() {
    std::array<std::string, 2> result;
    result[0] = RED + "O O";
    result[1] = " O "; 
    result[2] = "O O" + RED;
    return result;
}
std::array<std::string, 2> empty_cell() {
    std::array<std::string, 2> result;
    result[0] = "   ";
    result[1] = "   ";
    result[2] = "   ";
    return result;
}

std::array<std::string, 10> return_board() {
    std::array<std::string, 10> result;
    result[0] = _1_1[0] + " || " + _1_2[0] + " || " + _1_3[0] + "\n";
    result[1] = _1_1[1] + " || " + _1_2[1] + " || " + _1_3[1] + "\n";
    result[2] = _1_1[2] + " || " + _1_2[2] + " || " + _1_3[2] + "\n";
    result[3] = "----------------- \n";
    result[4] = _2_1[0] + " || " + _2_2[0] + " || " + _2_3[0] + "\n";
    result[5] = _2_1[1] + " || " + _2_2[1] + " || " + _2_3[1] + "\n";
    result[6] = _2_1[2] + " || " + _2_2[2] + " || " + _2_3[3] + "\n";
    result[7] = "-----------------\n";
    result[8] = _3_1[0] + " || " + _3_2[0] + " || " + _3_3[0] + "\n";
    result[9] = _3_2[1] + " || " + _3_2[1] + " || " + _3_3[1] + "\n";
    result[10] = _3_3[2] + " || " + _3_2[2] + " || " + _3_3[2] + "\n";

    return result;
}
/*
*   we gonna declare all the variables for this thing.
*   im gonna make them global becuase i hate parameters.
*   wish my hands good luck!
*/

/*
*   we will make each "cell" a variable
*   im adding _ at the start before the compiler gives me errors.
*/

std::array<std::string, 2> _1_1 = empty_cell();
std::array<std::string, 2> _1_2 = empty_cell();
std::array<std::string, 2> _1_3 = empty_cell();

std::array<std::string, 2> _2_1 = empty_cell();
std::array<std::string, 2> _2_2 = empty_cell();
std::array<std::string, 2> _2_3 = empty_cell();

std::array<std::string, 2> _3_1 = empty_cell();
std::array<std::string, 2> _3_2 = empty_cell();
std::array<std::string, 2> _3_3 = empty_cell();

/*
*   now we will just declare atuff like "running" and "playing"
*/
bool running = true;
bool playing = true;

bool valid = false;

int player_choice_y;
int player_choice_x;

int bot_choice_y;
int bot_choice_x;

bool player_turn = true;
/*
*   im gonna be using ANSI escape codes for colors
*   it will be more readable and easier if we just make them into variables
*   im using octo bc its short and i know it works.
*/
std::string ESC = "\033[";
std::string BLUE = ESC + "34m";
std::string RED = ESC + "31m";
std::string WHITE_B = ESC + "47m";
std::string CLEAR = ESC + "2J\033[H";

std::array<std::string, 10> board;
int main() {
    std::cout << WHITE_B;
    std::cout << "Welcome to Muhammed Uzair's tic-tac-toe! \n";
    while (running) {
        while (playing) {
            board = return_board();
            for(const auto& line : board) {
                std::cout << line;
            }
        }
        std::cout << "\n";
        if (player_turn) {
            while (!valid) {
                std::cout << "choose a column (top to bottom): ";
                std::cin >> player_choice_y;
                std::cout << "choose a row (left to right): ";
                std::cin >> player_choice_x;
                // oh god this is gonna be painful now......
                if (player_choice_y == 1) {
                    if (player_choice_x != 1 || player_choice_x != 2 || player_choice_x != 3) {
                        std::cout << player_choice_x << " is not a valid choice! try again: \n";
                        valid = false;
                    }
                    if (player_choice_x == 1 && _1_1 != empty_cell()) {
                        std::cout << player_choice_x << " is already filled! try again: \n";
                        valid = false;
                    }
                } else if (player_choice_y == 2) {

                } else if (player_choice_y == 3) {

                } else {
                    std::cout << player_choice_y << " is not a valid choice! try again: \n";
                    valid = false;
                }
            }
        }
    }
}