  
#include <iostream>
#include <math.h>
#include <time.h>

int main () {

char s1 = 49;
char s2 = 50;
char s3 = 51;
char s4 = 52;
char s5 = 53;
char s6 = 54;
char s7 = 55;
char s8 = 56;
char s9 = 57;
int p1;
int p2;
int p3;
int p4;
int p5;
int gameMode;
srand (time(NULL));
int randomCorner = rand() % 4 + 1;

//1 is the closest corner to the top left and vice versa
srand (time(NULL));
int randomAdjCorner = rand() % 2 + 1;

//1 = s2, 2 = s6, 3 = s8, 4 = s4
srand (time(NULL));
int randEdge = rand() % 4 + 1;

srand (time(NULL));
int randNumFour = rand() % 4 + 1;

srand (time(NULL));
int randNumThree = rand() % 3 + 1;

srand (time(NULL));
int randNumTwo = rand() % 2 + 1;
//may or may not use the "c" variables
int c1;
int c2;
int c3;
int c4;


//chooses game difficulty
std::cout << "Choose difficulty: 1. Easy Mode 2. Hard Mode\n";
std::cin >> gameMode;

std::cout << "\n------------------------------\n\n";

std::cout << "      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

//player 1st move
std::cout << "\n Choose your first move: ";
std::cin >> p1;

switch (p1) {
case 1:
 s1 = char {'X'};
 break;
case 2:
 s2 = char {'X'};
 break;
case 3:
 s3 = char {'X'};
 break;
case 4:
 s4 = char {'X'};
 break;
case 5:
 s5 = char {'X'};
 break;
case 6:
 s6 = char {'X'};
 break;
case 7:
 s7 = char {'X'};
 break;
case 8:
 s8 = char {'X'};
 break;
case 9:
 s9 = char {'X'};
 break;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";


//for hard mode if the player goes into any corner the computer's first move will always be in the center
//hard mode: if p1 is in the center c1 will be in any corner
//hard mode: if p1 is on an edge c1 will be in an adjecent corner

//computers 1st move
if (gameMode == 2 && p1 == 1) {
    s5 = char {'O'};
    std::cout << "\nComputer goes 5\n";
    c1 = 5;
} else if (gameMode == 2 && p1 == 3) {
    s5 = char {'O'};
    std::cout << "\nComputer goes 5\n";
    c1 = 5;
}else if (gameMode == 2 && p1 == 7) {
    s5 = char {'O'};
    std::cout << "\nComputer goes 5\n";
    c1 = 5;
}else if (gameMode == 2 && p1 == 9) {
    s5 = char {'O'};
    std::cout << "\nComputer goes 5\n";
    c1 = 5;
}else if (gameMode == 2 && p1 == 5 && randomCorner == 1) {
    s1 = char {'O'};
    std::cout << "\nComputer goes 1\n";
    c1 = 1;
}else if (gameMode == 2 && p1 == 5 && randomCorner == 2) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c1 = 3;
}else if (gameMode == 2 && p1 == 5 && randomCorner == 3) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c1 = 7;
}else if (gameMode == 2 && p1 == 5 && randomCorner == 4) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c1 = 9;
}else if (gameMode == 2 && p1 == 2 && randomAdjCorner == 1) {
    s1 = char {'O'};
    std::cout << "\nComputer goes 1\n";
    c1 = 1;
}else if (gameMode == 2 && p1 == 2 && randomAdjCorner == 2) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c1 = 3;
}else if (gameMode == 2 && p1 == 6 && randomAdjCorner == 1) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c1 = 3;
}else if (gameMode == 2 && p1 == 6 && randomAdjCorner == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c1 = 9;
}else if (gameMode == 2 && p1 == 8 && randomAdjCorner == 1) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c1 = 7;
}else if (gameMode == 2 && p1 == 8 && randomAdjCorner == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c1 = 9;
}else if (gameMode == 2 && p1 == 4 && randomAdjCorner == 1) {
    s1 = char {'O'};
    std::cout << "\nComputer goes 1\n";
    c1 = 1;
}else if (gameMode == 2 && p1 == 4 && randomAdjCorner == 2) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c1 = 7;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//players 2nd move
std::cout << "\nNext Move: ";
std::cin >> p2;

switch (p2) {
case 1:
 s1 = char {'X'};
 break;
case 2:
 s2 = char {'X'};
 break;
case 3:
 s3 = char {'X'};
 break;
case 4:
 s4 = char {'X'};
 break;
case 5:
 s5 = char {'X'};
 break;
case 6:
 s6 = char {'X'};
 break;
case 7:
 s7 = char {'X'};
 break;
case 8:
 s8 = char {'X'};
 break;
case 9:
 s9 = char {'X'};
 break;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//computers 2nd move

//in the case p1 is in a corner and p2 is in the opposite corner the computer will go into a random remaining edge 1-4 called randEdge where 1 = s2, 2 = s6, 3 = s8, 4 = s4
if (gameMode == 2 && p1 == 1 && p2 == 9 && randEdge == 1) {
    c2 = 2;
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && randEdge == 2) {
    c2 = 6;
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && randEdge == 3) {
    c2 = 8;
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && randEdge == 4) {
    c2 = 4;
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
}else if (gameMode == 2 && p1 == 3 && p2 == 7 && randEdge == 1) {
    c2 = 2;
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
}else if (gameMode == 2 && p1 == 3 && p2 == 7 && randEdge == 2) {
    c2 = 6;
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
}else if (gameMode == 2 && p1 == 3 && p2 == 7 && randEdge == 3) {
    c2 = 8;
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
}else if (gameMode == 2 && p1 == 3 && p2 == 7 && randEdge == 4) {
    c2 = 4;
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
}else if (gameMode == 2 && p1 == 7 && p2 == 3 && randEdge == 1) {
    c2 = 2;
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
}else if (gameMode == 2 && p1 == 7 && p2 == 3 && randEdge == 2) {
    c2 = 6;
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
}else if (gameMode == 2 && p1 == 7 && p2 == 3 && randEdge == 3) {
    c2 = 8;
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
}else if (gameMode == 2 && p1 == 7 && p2 == 3 && randEdge == 4) {
    c2 = 4;
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
}else if (gameMode == 2 && p1 == 9 && p2 == 1 && randEdge == 1) {
    c2 = 2;
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
}else if (gameMode == 2 && p1 == 9 && p2 == 1 && randEdge == 2) {
    c2 = 6;
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
}else if (gameMode == 2 && p1 == 9 && p2 == 1 && randEdge == 3) {
    c2 = 8;
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
}else if (gameMode == 2 && p1 == 9 && p2 == 1 && randEdge == 4) {
    c2 = 4;
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 2) {
    c2 = 3;
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 3) {
    c2 = 2;
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 4) {
    c2 = 7;
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 6) {
    c2 = 3;
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 7) {
    c2 = 4;
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
}else if (gameMode == 2 && p1 == 1 && p2 == 8) {
    c2 = 7;
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
}

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//players 3rd move
std::cout << "\nNext Move: ";
std::cin >> p3;

switch (p3) {
case 1:
 s1 = char {'X'};
 break;
case 2:
 s2 = char {'X'};
 break;
case 3:
 s3 = char {'X'};
 break;
case 4:
 s4 = char {'X'};
 break;
case 5:
 s5 = char {'X'};
 break;
case 6:
 s6 = char {'X'};
 break;
case 7:
 s7 = char {'X'};
 break;
case 8:
 s8 = char {'X'};
 break;
case 9:
 s9 = char {'X'};
 break;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//computers 3rd move
if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 8 && c2 == 2) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c3 = 7;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 4 && c2 == 6) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c3 = 7;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 2 && c2 == 8) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c3 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 6 && c2 == 4) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c3 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 2 && p3 == 7 && c2 == 3) {
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
    c3 = 4;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 == 8 && c2 == 2) {
    s7 = char {'O'};
    std::cout << "\nComputer goes 7\n";
    c3 = 7;
}else if (gameMode == 2 && p1 == 1 && p2 ==4 && p3 == 3 && c2 == 7) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c3 = 2;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 == 7 && c2 == 3) {
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
    c3 = 4;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && c2 == 4 && randNumFour == 1) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c3 = 2;
} else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && c2 == 4 && randNumFour == 2) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c3 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && c2 == 4 && randNumFour == 3) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c3 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && c2 == 4 && randNumFour == 4) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c3 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 == 3 && c2 == 7) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c3 = 2;
}



else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 != 8 && c2 == 2) {
    s8 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 != 4 && c2 == 6) {
    s4 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 != 2 && c2 == 8) {
    s2 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 != 6 && c2 == 4) {
    s6 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 2 && p3 != 7 && c2 == 3) {
    s7 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 != 8 && c2 == 2) {
    s8 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 4 && p3 != 3 && c2 == 7) {
    s3 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 != 7 && c2 == 3) {
    s7 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 != 6 && c2 == 4) {
    s6 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 != 3 && c2 == 7) {
    s3 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    return 0;
}

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//players 4th move
std::cout << "\nNext Move: ";
std::cin >> p4;

switch (p4) {
case 1:
 s1 = char {'X'};
 break;
case 2:
 s2 = char {'X'};
 break;
case 3:
 s3 = char {'X'};
 break;
case 4:
 s4 = char {'X'};
 break;
case 5:
 s5 = char {'X'};
 break;
case 6:
 s6 = char {'X'};
 break;
case 7:
 s7 = char {'X'};
 break;
case 8:
 s8 = char {'X'};
 break;
case 9:
 s9 = char {'X'};
 break;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//computer's 4th turn
if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 8 && p4 == 3 && c2 == 2 && c3 == 7) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 4 && p4 == 3 && c2 == 6 && c3 == 7) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c4 = 2;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 2 && p4 == 7 && c2 == 8 && c3 == 3) {
    s4 = char {'O'};
    std::cout << "\nComputer goes 4\n";
    c4 = 4;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 6 && p4 == 7 && c2 == 4 && c3 == 3) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 == 7 && p4 == 2 && c2 == 3 && c3 == 4 && randNumTwo == 1) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 == 7 && p4 == 2 && c2 == 3 && c3 == 4 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 == 7 && p4 == 9 && c2 == 3 && c3 == 4) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 6 && p3 == 7 && p4 == 8 && c2 == 3 && c3 == 4) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 8 && c2 == 4 && c3 == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 2 && c2 == 4 && c3 == 8) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c4 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 2 && c2 == 4 && c3 == 3 && randNumTwo == 1) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 2 && c2 == 4 && c3 == 3 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 8 && c2 == 4 && c3 == 3) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 9 && c2 == 4 && c3 == 3) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 8 && c2 == 4 && c3 == 9 && randNumTwo == 1) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c4 = 2;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 8 && c2 == 4 && c3 == 9 && randNumTwo == 2) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c4 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 2 && c2 == 4 && c3 == 9) {
    s3 = char {'O'};
    std::cout << "\nComputer goes 3\n";
    c4 = 3;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 == 3 && c2 == 4 && c3 == 9) {
    s2 = char {'O'};
    std::cout << "\nComputer goes 2\n";
    c4 = 2;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 == 3 && p4 == 4 && c2 == 7 && c3 == 2 && randNumTwo == 1) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 == 3 && p4 == 4 && c2 == 7 && c3 == 2 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 == 3 && p4 == 6 && c2 == 7 && c3 == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 8 && p3 == 3 && p4 == 9 && c2 == 7 && c3 == 2) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 2 && p3 == 7 && p4 == 6 && c2 == 3 && randNumTwo == 1) {
    s8 = char {'O'};
    std::cout << "\nComputer goes 8\n";
    c4 = 8;
}else if (gameMode == 2 && p1 == 1 && p2 == 2 && p3 == 7 && p4 == 6 && c2 == 3 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 == 8 && p4 == 4 && c2 == 2 && c3 == 7 && randNumTwo == 1) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 == 8 && p4 == 4 && c2 == 2 && c3 == 7 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 == 8 && p4 == 6 && c2 == 2 && c3 == 7) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 3 && p3 == 8 && p4 == 9 && c2 == 2 && c3 == 7) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 4 && p3 == 3 && p4 == 8 && c2 == 7 && c3 == 2 && randNumTwo == 1) {
    s6 = char {'O'};
    std::cout << "\nComputer goes 6\n";
    c4 = 6;
}else if (gameMode == 2 && p1 == 1 && p2 == 4 && p3 == 3 && p4 == 8 && c2 == 7 && c3 == 2 && randNumTwo == 2) {
    s9 = char {'O'};
    std::cout << "\nComputer goes 9\n";
    c4 = 9;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 8 && p4 != 3 && c2 == 2 && c3 == 7) {
    s3 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 3;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 4 && p4 != 3 && c2 == 6 && c3 == 7) {
    s3 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 3;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 2 && p4 != 7 && c2 == 8 && c3 == 3) {
    s7 = char {'O'};
    std::cout << "\n\nComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 7;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 9 && p3 == 6 && p4 != 7 && c2 == 4 && c3 == 3) {
    s7 = char {'O'};
    std::cout << "\n\nnComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 7;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 2 && p3 == 7 && p4 != 6 && c2 == 3 && c3 == 4) {
    s6 = char {'O'};
    std::cout << "\n\nnComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 6;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 4 && p3 == 3 && p4 != 8 && c2 == 7 && c3 == 2) {
    s8 = char {'O'};
    std::cout << "\n\nnComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 8;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 != 8 && c2 == 4 && c3 == 2) {
    s8 = char {'O'};
    std::cout << "\n\nnComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 8;
    return 0;
}else if (gameMode == 2 && p1 == 1 && p2 == 7 && p3 == 6 && p4 != 2 && c2 == 4 && c3 == 8) {
    s2 = char {'O'};
    std::cout << "\n\nnComputer Wins!\n";
    std::cout << "\n------------------------------";
    c4 = 2;
    return 0;
}

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

//player's 5th move
std::cout << "\nNext Move: ";
std::cin >> p5;

switch (p5) {
case 1:
 s1 = char {'X'};
 break;
case 2:
 s2 = char {'X'};
 break;
case 3:
 s3 = char {'X'};
 break;
case 4:
 s4 = char {'X'};
 break;
case 5:
 s5 = char {'X'};
 break;
case 6:
 s6 = char {'X'};
 break;
case 7:
 s7 = char {'X'};
 break;
case 8:
 s8 = char {'X'};
 break;
case 9:
 s9 = char {'X'};
 break;
};

std::cout << "\n      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n------------------------------";

std::cout << "\n\nDraw!\n";

std::cout << "\n------------------------------";
}