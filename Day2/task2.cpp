#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int riggedScore(char opponent, char you) {
    int opponentChoice = (int)opponent - 64;
    int yourResult = (int) you - 87;
    int score = 0;
    if(yourResult == 1)
        return score+= ((opponentChoice+2)%3) == 0 ? 3 :((opponentChoice+2)%3);
    if(yourResult == 2)
        return score+= opponentChoice + 3;
    if(yourResult == 3)
        return score+= (opponentChoice%3)+1 + 6;
    else return -1;
}

int main() {
    ifstream input ("input.txt");
    int ans = 0;
    char a,b;
    while(input >> a >> b)
        ans += riggedScore(a, b);
    cout << a << b << endl;
    cout << ans << endl;
    
    return 0;
}   