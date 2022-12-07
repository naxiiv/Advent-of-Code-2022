#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int Overlap(int OneStart, int OneEnd, int TwoStart, int TwoEnd) { 
    for(int i = OneStart; i <= OneEnd; i++) {
        if(i >= TwoStart && i <= TwoEnd)
            return 1;
    }
    return 0;
}

int FullyOverlap(int OneStart, int OneEnd, int TwoStart, int TwoEnd) {
    bool correct = 1;

    if((OneStart <= TwoStart && OneEnd >= TwoEnd) || (TwoStart<=OneStart && TwoEnd >= OneEnd))
        return 1;
    else
        return 0;
}

int main() {
    ifstream input ("input.txt");
    string temp;
    int ans = 0;
    while(input >> temp) {
        int middle = temp.find(",");
        string before = temp.substr(0,middle);
        string after = temp.substr(middle+1);

        int beforeMiddle = before.find("-");

        int beforeStart = stoi(before.substr(0,beforeMiddle));
        int beforeEnd = stoi(before.substr(beforeMiddle+1));

        int afterMiddle = after.find("-");

        int afterStart = stoi(after.substr(0,afterMiddle));
        int afterEnd = stoi(after.substr(afterMiddle+1));
        
        ans += Overlap(beforeStart,beforeEnd,afterStart,afterEnd);
    }    
    cout << FullyOverlap(1,3,2,4);
    cout << ans <<endl;
    return 0;
}  