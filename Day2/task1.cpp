#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int score(char opponent, char you) {
    int opponentChoice = (int)opponent - 64;
    int yourChoice = (int) you - 87;
    int score = 0;
    score += yourChoice;

    if(yourChoice == opponentChoice)
        return score+3;
    if( yourChoice % 3 == (opponentChoice-1)%3)
        return score;
    else
        return score+6; 
}

int main() {
    ifstream input ("input.txt");
    int ans = 0;
    char a,b;
    while(input >> a >> b)
        ans += score(a, b);
    cout << a << b << endl;
    cout << ans << endl;
    
    return 0;
}   