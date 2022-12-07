#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define ALPHABET 52

int grantIndex(char num) {
    return (int) num - 97 >= 0 ? (int) num - 96 : (int) num - 64 + ALPHABET/2;
}

int badge(string rucksack[3]) {
    int items[ALPHABET][3];
        for(int i=0; i<ALPHABET; i++)
            for(int x = 0; x <3; x++)
            items[i][x] = 0;
    for(int x = 0; x < 3; x++) {
        for(int i = 0; i < rucksack[x].length(); i++) {
            int index = grantIndex(rucksack[x].at(i)) - 1;
            if(i<rucksack[x].length()) {
                items[index][x] = 1;
            }
            if(items[index][0] == 1 && items[index][1] == 1 && items[index][2] == 1) {
                cout << index +1 <<endl;
                return index+1;
            }
        }   
    }
    cout << "NOT FOUND" <<endl;
    return 0;
}

int main() {
    ifstream input ("input.txt");
    int ans = 0;
    string lines[3];
    while(input >> lines[0] >> lines[1] >> lines[2]) 
        ans += badge(lines);
    
    cout << ans << endl;
    
    return 0;
}   