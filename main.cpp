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
*   we are gonna make functions so at least our main function is readable
*/
std::array<std::string, 3> stylish_x_cell() {
    std::array<std::string, 3> result;
    result[1] = RED + " O O";
    result[2] = " O "; 
    result[3] = "O O" + RED;
    return result;
}
std::array<std::string, 3> empty_cell() {
    std::array<std::string, 3> result;
    result[1] = "   ";
    result[2] = "   ";
    result[3] = "   ";
    return result;
}

std::array<std::string, 12> print_board() {
    std::array<std::string, 12> result[12];
    result[1] = _1_1[1] + " || " + _1_2[1] + " || " + _1_3[1];
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

std::array<std::string, 3> _1_1 = empty_cell();
std::array<std::string, 3> _1_2 = empty_cell();
std::array<std::string, 3> _1_3 = empty_cell();

std::array<std::string, 3> _2_1 = empty_cell();
std::array<std::string, 3> _2_2 = empty_cell();
std::array<std::string, 3> _2_3 = empty_cell();

std::array<std::string, 3> _3_1 = empty_cell();
std::array<std::string, 3> _3_2 = empty_cell();
std::array<std::string, 3> _3_3 = empty_cell();

/*
*   now we will just declare atuff like "running" and "playing"
*/
bool running = true;
bool playing = true;

int player_choice_y;
int player_choice_x;

int bot_choice_y;
int bot_choice_x;

bool player_turn = true;

bool no_turn = true;
/*
*   im gonna be using ANSI escape codes for colors
*   it will be more readable and easier if we just make them into variables
*   im using octo bc its short.
*/
std::string ESC = "\033[";
std::string BLUE = ESC + "34m";
std::string RED = ESC + "31m";
std::string WHITE_B = ESC + "47m";
std::string CLEAR = ESC + "2J\033[H";

int main() {
    std::cout << WHITE_B;
    std::cout << "Welcome to Muhammed Uzair's tic-tac-toe! \n";
}