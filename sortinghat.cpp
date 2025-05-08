#include <iostream>
#include <string>

using namespace std;

int main() {
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    cout << "The Sorting Hat Quiz!\n";

    // Q1
    cout << "Q1) When I'm dead, I want people to remember me as:\n";
    cout << "1) The Good\n";
    cout << "2) The Great\n";
    cout << "3) The Wise\n";
    cout << "4) The Bold\n";
    cin >> answer1;

    if (answer1 == 1) ++hufflepuff;
    else if (answer1 == 2) ++slytherin;
    else if (answer1 == 3) ++ravenclaw;
    else if (answer1 == 4) ++gryffindor;
    else cout << "-Invalid input-\n";

    // Q2
    cout << "Q2) Dawn or Dusk?\n";
    cout << "1) Dawn\n";
    cout << "2) Dusk\n";
    cin >> answer2;

    if (answer2 == 1) { ++gryffindor; ++ravenclaw; }  // Fixed: Use {} instead of &&
    else if (answer2 == 2) { ++hufflepuff; ++slytherin; }  // Fixed: Use {} instead of &&
    else cout << "-Invalid input-\n";

    // Q3
    cout << "Q3) Which kind of instrument most pleases your ear?\n";
    cout << "1) The violin\n";
    cout << "2) The trumpet\n";
    cout << "3) The piano\n";
    cout << "4) The drum\n";
    cin >> answer3;

    if (answer3 == 1) ++slytherin;
    else if (answer3 == 2) ++hufflepuff;
    else if (answer3 == 3) ++ravenclaw;
    else if (answer3 == 4) ++gryffindor;
    else cout << "-Invalid input-\n";

    // Q4
    cout << "Q4) Which road tempts you most?\n";  // Fixed: Missing newline
    cout << "1) The wide, sunny grassy lane\n";
    cout << "2) The narrow, dark, lantern-lit alley\n";
    cout << "3) The twisting, leaf-strewn path through woods\n";  // Fixed: Missing closing quote
    cout << "4) The cobbled street lined with ancient buildings\n";  // Fixed: Missing words
    cin >> answer4;  // Fixed: Missing input for answer4

    if (answer4 == 1) ++hufflepuff;
    else if (answer4 == 2) ++slytherin;  // Fixed: Typo in 'slytherin'
    else if (answer4 == 3) ++gryffindor;
    else if (answer4 == 4) ++ravenclaw;
    else cout << "-Invalid input-\n";

    // Determine the house with the highest score
    int max = 0;
    string house;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    cout << house << "!\n";

    return 0;
}
