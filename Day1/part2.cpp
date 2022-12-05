#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const int topX = 3;

int main() {
    ifstream input ("input.txt");
    int top[topX];
    int sum = 0;

    for(string temp; getline(input,temp);) {
        if(temp == "") {
            for(int i = 1; i < topX; i++) {
                if(top[i-1] < sum && top[i] > sum ) {
                    temp[i-1] = sum;
                    sum = 0;
                    break;
                }
            }
        } else {
            sum += stoi(temp);
        }        
    }
    for(int x : top)
        cout << x << endl;
    return 0;
}   