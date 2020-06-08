#include <iostream>

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
//may or may not use the "c" variables
int c1;
int c2;
int c3;
int c4;

std::cout << "      |     |     \n";
std::cout << "   "<< s1 <<"  |  "<< s2 <<"  |  "<< s3 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s4 <<"  |  "<< s5 <<"  |  "<< s6 <<"  \n";
std::cout << " _____|_____|_____\n";
std::cout << "      |     |     \n";
std::cout << "   "<< s7 <<"  |  "<< s8 <<"  |  "<< s9 <<"  \n";
std::cout << "      |     |     \n";

std::cout << "\n Choose your first move: ";
std::cin >> p1;

//for hard mode if the player goes into any corner the computer's first move will always be in the center
//hard mode: if p1 is in the center c1 will be in any corner
//hard mode: if p1 is on an edge c1 will be in an adjecent corner


}