// COMSC-210 | Lab 12 | Justin Mikesell
// IDE used: Visual Studio Code 

#include <iostream>
#include <algorithm>  // for sort(), find()
#include <numeric>    // for accumulate()
#include <array>
#include <fstream>     
using namespace std;

const int SIZE = 30;   

int main() {
    // declarations
    array<int, SIZE> entries{};   // BART Powell St entries each day for 30 days
    ifstream fin("data.txt");

if (!fin) {
    cout << "Error unable to open data.txt\n";
    return 1;
}


    // read values from file to array
    for (int i = 0; i < SIZE; i++) {
        fin >> entries[i];
    }
    fin.close();

    // capacity/emptiness
    cout << "1.  Size: " << entries.size() << endl;
    cout << "2.  max_size(): " << entries.max_size() << endl;
    cout << "3.  Empty? " << (entries.empty() ? "True" : "False") << endl;