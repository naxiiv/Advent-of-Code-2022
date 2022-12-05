#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

const int topX = 3;

int main() {
    ifstream input ("input.txt");
    int top[topX];
    vector<int> topCal;
    int sum = 0;

    for(string temp; getline(input,temp);) {
        if(temp == "") {
            topCal.push_back(sum);
            sort(topCal.begin(),topCal.end());
            if(topCal.size() > topX)
                topCal.erase(topCal.begin());
            sum = 0;
        } else {
            sum += stoi(temp);
        }        
    }
    int total = 0;
    for(int x : topCal)
        total+=x;
    cout << total << endl;
    return 0;
}   