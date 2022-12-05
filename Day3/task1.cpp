#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define ALPHABET 52

int grantIndex(char num) {
    return (int) num - 97 >= 0 ? (int) num - 96 : (int) num - 64 + ALPHABET/2;
}

int value(string rucksack) {
    int items[ALPHABET];
    for(int i = 0; i < rucksack.length(); i++) {
        int index = grantIndex(rucksack.at(i));
        cout << index << endl;
        if(i<rucksack.length()/2) {
            return 1;
        }
    }    
    return 2;
}

int main() {
    ifstream input ("input.txt");
    int ans = 0;
    string line;
    while(input >> line)
        ans += value(line);
    cout << ans << endl;
    
    return 0;
}   