#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ifstream input ("input.txt");
    int max = 0;
    int sum = 0;

    for(string temp; getline(input,temp);) {
        if(temp == "") {
            max = sum > max ? sum : max;
            sum = 0;
        } else {
            sum += stoi(temp);
        }        
    }
    cout << max <<endl;
    return 0;
}   